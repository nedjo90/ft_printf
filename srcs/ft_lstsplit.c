/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:56:09 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 19:17:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_operator(char const *fmt, t_list **list)
{
	char	*temp;
	int		i;

	if (!fmt || !list)
		return (-1);
	if (*fmt == '\0')
		return (0);
	i = 1;
	while (fmt[i] != '\0' && !ft_iskey(fmt[i]))
		i++;
	if (ft_iskey(fmt[i]))
		i++;
	temp = ft_substr(fmt, 0, i);
	if (!temp)
		return (-1);
	ft_lstadd_back(list, ft_lstnew(temp));
	return (i);
}

static void	add_back_str(t_list **list, const char *fmt, int start, int end)
{
	char	*temp;

	if (!list || !fmt || !(end > start))
		return ;
	temp = ft_substr(fmt, start, end - start);
	if (!temp)
		return ;
	ft_lstadd_back(list, ft_lstnew(temp));
}

t_list	**ft_lstsplit(char const *fmt)
{
	t_list	**list;
	int		i;
	int		j;

	if (!fmt)
		return (NULL);
	list = (t_list **) malloc (sizeof(t_list *));
	if (!list)
		return (NULL);
	*list = NULL;
	i = 0;
	while (fmt[i] != '\0')
	{
		j = i;
		while (fmt[i] != '%' && fmt[i] != '\0')
			i++;
		add_back_str(list, fmt, j, i);
		j = ft_operator(&fmt[i], list);
		if (j == -1)
			return (NULL);
		i += j;
	}
	return (list);
}
