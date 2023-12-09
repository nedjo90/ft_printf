/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:56:09 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:11:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_operator(char const *fmt, t_list **list)
{
	int		i;

	if (!fmt || !list)
		return (0);
	i = 1;
	while (fmt[i] != '\0' && !ft_iskey(fmt[i]))
		i++;
	if (ft_iskey(fmt[i]))
		i++;
	ft_lstadd_back(list, ft_lstnew(ft_substr(fmt, 0, i)));
	return (i);
}

t_list	**ft_lstsplit(char const *fmt)
{
	t_list	**list;
	int		i;
	int		j;

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
		if (i > j)
			ft_lstadd_back(list, ft_lstnew(ft_substr(fmt, j, i - j)));
		if (fmt[i] != '\0')
			i += ft_operator(&fmt[i], list);
	}
	return (list);
}
