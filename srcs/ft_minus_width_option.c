/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_width_option.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:19:03 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 13:03:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_minus_width_option(char *str, int width)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char *) malloc ((width + 1) * sizeof(char));
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	while (i < width)
	{
		temp[i] = ' ';
		i++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}
