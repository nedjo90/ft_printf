/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:49:58 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 01:15:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_option_hex(char *str, t_list *list, int low_high)
{
	int	test;

	test = 1;
	if (str[0] == '0')
		test = 0;
	if (list->periode && list->precision == 0 && !test)
		ft_periode_zero_int(str);
	else if (list->periode && list->precision > (int)ft_strlen(str))
		str = ft_periode_int(str, list->precision);
	if (list->sharp && test)
		str = ft_sharp_option(str, low_high);
	if (list->minus && list->width > (int)ft_strlen(str))
		str = ft_minus_width_option(str, list->width);
	else if (list->width > (int)ft_strlen(str))
		str = ft_width_option(str, list->width);
	if (list->zero && !list->periode)
	{
		if (list->sharp && test)
			ft_zero_sharp(str, low_high);
		else
			ft_zero_int(str, list);
	}
	return (str);
}
