/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_operator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:36:10 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 16:40:29 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_change_operator(t_print_list *list, va_list args)
{	
	while (list != NULL)
	{
		if (list->is_str == 0)
		{
			if (list->str[1] == 'c')
				ft_print_char(list->str, va_arg(args, int));
			else if (list->str[1] == 's')
				ft_print_str(list->str, va_arg(args, char *));
/*			else if (*(str + 1) == 'p')
				ft_print_ptr(list->str, va_args(args, unsigned long));
*/			else if (list->str[1] == 'd' || list->str[1] == 'i')
				ft_print_int(list->str, va_arg(args, int));
/*			else if (list->str[1] == 'u')
				ft_print_uint(list->str, va_args(args, unsigned int));
			else if (list->str[1] == 'x')
				ft_print_low_hexa(list->str, va_args(args, unsigned long));
			else if (list->str[1] == 'X')
				ft_print_up_hexa(list->str, va_args(args, unsigned long));
			else if (list->str[1] == '%')
				ft_print_percent(list->str, va_args(args, char *));
*/		}
		list=list->next;
	}
}
