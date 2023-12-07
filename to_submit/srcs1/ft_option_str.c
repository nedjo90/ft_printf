/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:30 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 12:54:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_option_str(char *str, t_list *list)
{
	if (list->periode == 1 && list->precision < (int)ft_strlen(str))
		str = ft_periode_option(str, list->precision);
	if (list->minus && list->width > 0 && list->width > (int)ft_strlen(str))
		str = ft_minus_width_option(str, list->width);
	else if (list->width > 0)
		str = ft_width_option(str, list->width);
	if (list->zero)
		ft_zero_option(str);
	return (str);
}
