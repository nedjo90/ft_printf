/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:40:39 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 17:07:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_replace(t_list **list, va_list args)
{
	t_list	*temp;

	temp = *list;
	while (temp != NULL)
	{
		if (temp->content[0] == '%' && temp->content[1] == 'c')
			ft_print_char(temp, va_arg(args, int));
		else if (temp->content[0] == '%' && temp->content[1] == 's')
			ft_print_str(temp, va_arg(args, char *));
		else if (temp->content[0] == '%' && temp->content[1] == '%')
			ft_print_percent(temp);
		else if (temp->content[0] == '%' && temp->content[1] == 'p')
			ft_print_address(temp, va_arg(args, long));
		else if (temp->content[0] == '%' && (temp->content[1] == 'd'\
			|| temp->content[1] == 'i'))
			ft_print_itoa(temp, va_arg(args, int));
		else if (temp->content[0] == '%' && temp->content[1] == 'u')
			ft_print_uitoa(temp, va_arg(args, int));
		else if (temp->content[0] == '%' && temp->content[1] == 'x')
			ft_print_hex_low_high(temp, va_arg(args, int), 0);
		else if (temp->content[0] == '%' && temp->content[1] == 'X')
			ft_print_hex_low_high(temp, va_arg(args, int), 1);
		temp = temp->next;
	}
}
