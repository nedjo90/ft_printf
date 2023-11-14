/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:37:22 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:37:45 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_print_list	**list;
	size_t	count;
	va_list	args;

	if (format == NULL)
		return (0);
	list = (t_print_list **) malloc (sizeof(t_print_list *));
	if (list == NULL)
		return (0);
	*list = NULL;
	ft_lst_split(list, (char *)format);
	va_start(args, format);
	ft_change_operator(*list, args);
	va_end(args);
	if (list != NULL && *list != NULL)
	{
		count = ft_display_lst(list);
		ft_print_lstclear(list);
		return (count);
	}
	return (0);
}
