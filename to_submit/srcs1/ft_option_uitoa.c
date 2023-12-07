/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_uitoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:51:28 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 22:14:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_uint(char *str, int precision)
{
	char	*temp;
	int		size;

	size = ft_strlen(str);
	temp = (char *) malloc ((precision + 1) * sizeof(char));
	while (size >= 0)
	{
		temp[precision] = str[size];
		precision--;
		size--;
	}
	while (precision >= 0)
	{
		temp[precision] = '0';
		precision--;
	}
	free(str);
	return (temp);
}

char	*ft_option_uitoa(char *str, t_list *list)
{
	if (list->periode && list->precision == 0 && str[0] == '0')
		ft_periode_zero_int(str);
	if (list->periode && list->precision > (int)ft_strlen(str))
		str = ft_periode_uint(str, list->precision);
	if (list->minus && list->width > (int)ft_strlen(str))
		str = ft_minus_width_option(str, list->width);
	else if (list->width > (int)ft_strlen(str))
		str = ft_width_option(str, list->width);
	if (list->zero && !list->periode)
		ft_zero_int(str, list);
	return (str);
}
