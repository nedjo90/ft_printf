/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:56:09 by nhan              #+#    #+#             */
/*   Updated: 2023/11/20 09:20:38 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_iskey(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'\
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_operator(char const *fmt, t_list **list)
{
	int		i;

	i = 1;
	while (fmt[i] != '\0' && ft_isdigit(fmt[i]))
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
	if (list == NULL)
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
