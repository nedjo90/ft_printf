/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_periode_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:35:17 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 21:35:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_int(char *str, int precision)
{
	char	*temp;
	int		size;

	size = ft_strlen(str);
	if (str[0] == '-')
		precision++;
	temp = (char *) malloc ((precision + 1) * sizeof(char));
	while (size >= 0 && str[size] != '-')
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
	if (str[0] == '-')
		temp[0] = '-';
	free(str);
	return (temp);
}
