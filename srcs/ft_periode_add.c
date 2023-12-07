/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_periode_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:19:19 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 01:20:43 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_add(char *str, int precision)
{
	char	*temp;
	int		size;

	size = ft_strlen(str);
	precision += 2;
	temp = (char *) malloc ((precision + 1) * sizeof(char));
	while (str[size] != 'x')
	{
		temp[precision] = str[size];
		precision--;
		size--;
	}
	while (precision != size)
	{
		temp[precision] = '0';
		precision--;
	}
	temp[1] = 'x';
	temp[0] = '0';
	free(str);
	return (temp);
}
