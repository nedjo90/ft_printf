/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:40:39 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 12:36:29 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_replace(t_list **list, va_list args)
{
	char	*temp;
	t_list	*t_temp;
	size_t	i;

	t_temp = *list;
	while (t_temp != NULL)
	{
		temp = t_temp->content;
		i = ft_strlen(temp) - 1;
		if (temp[0] == '%' && temp[i] == 'c')
			ft_print_char(t_temp, va_arg(args, int));
		else if (temp[0] == '%' && temp[i] == 's')
			ft_print_str(t_temp, va_arg(args, char *));
		else if (temp[0] == '%' && temp[i] == '%' && ft_strlen(temp) > 1)
			ft_print_percent(t_temp);
		else if (temp[0] == '%' && temp[i] == 'p')
			ft_print_address(t_temp, va_arg(args, long));
		else if (temp[0] == '%' && (temp[i] == 'd' || temp[i] == 'i'))
			ft_print_itoa(t_temp, va_arg(args, int));
		else if (temp[0] == '%' && temp[i] == 'u')
			ft_print_uitoa(t_temp, va_arg(args, int));
		else if (temp[0] == '%' && (temp[i] == 'x' || temp[i] == 'X'))
			ft_print_hex_low_high(t_temp, va_arg(args, int));
		t_temp = t_temp->next;
	}
}
