/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:50:43 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 22:54:07 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_option_itoa(char *str, t_list *list)
{
	if (list->periode && list->precision == 0 && ft_atoi(str) == 0)
		ft_periode_zero_int(str);
	else if (list->periode && list->precision > (int)ft_strlen(str))
		str = ft_periode_int(str, list->precision);
	if (list->plus && str[0] != '-' && list->periode \
		&& list->precision == 0 && ft_strlen(str) == 1)
		str[0] = '+';
	else if (list->plus && str[0] != '-')
		str = ft_plus_option(str);
	if (list->space && str[0] != '-' && str[0] != '+')
		str = ft_space_option(str);
	if (list->minus && list->width > (int)ft_strlen(str))
		str = ft_minus_width_option(str, list->width);
	else if (list->width > (int)ft_strlen(str))
		str = ft_width_option(str, list->width);
	if (list->zero && !list->periode)
		ft_zero_int(str, list);
	return (str);
}
