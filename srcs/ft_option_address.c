/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:47:15 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 01:20:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_option_address(char *str, t_list *list)
{
	int	test;

	test = 1;
	if (str[2] == '0')
		test = 0;
	if (list->periode && list->precision == 0 && !test)
		str = ft_periode_zero_add(str);
	else if (list->periode && list->precision > (int)ft_strlen(str))
		str = ft_periode_add(str, list->precision);
	if (list->minus && list->width > (int)ft_strlen(str))
		str = ft_minus_width_option(str, list->width);
	else if (list->width > (int)ft_strlen(str))
		str = ft_width_option(str, list->width);
	if (list->zero && !list->periode)
		ft_zero_sharp(str, 0);
	return (str);
}
