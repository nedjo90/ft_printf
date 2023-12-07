/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:19:03 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 14:33:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_width_option(char *str, int width)
{
	char	*temp;
	int		size;
	int		i;

	size = (int)ft_strlen(str);
	if (width > size)
		i = size + (width - size);
	else
		return (str);
	temp = (char *) malloc ((i + 1) * sizeof(char));
	temp[i--] = '\0';
	while (--size >= 0)
	{
		temp[i] = str[size];
		i--;
	}
	while (i >= 0)
	{
		temp[i] = ' ';
		i--;
	}
	free(str);
	return (temp);
}
