/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:38:59 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 14:39:51 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	testputnbr(char *name, int n)
{
	char	*str;

	str = ft_itoa(n);
	write(1, name, ft_strlen(name));
	write(1, "->", 2);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

void	display_option(t_list *list)
{
	testputnbr("minus", list->minus);
	testputnbr("zero", list->zero);
	testputnbr("plus", list->plus);
	testputnbr("space", list->space);
	testputnbr("sharp", list->sharp);
	testputnbr("width", list->width);
	testputnbr("periode", list->periode);
	testputnbr("precision", list->precision);
}
