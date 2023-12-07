/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sharp_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:14:32 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 01:14:55 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_sharp_option(char *str, int low_high)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *) malloc ((ft_strlen(str) + 3) * sizeof(char));
	i = 2;
	j = 0;
	temp[0] = '0';
	if (low_high == 1)
		temp[1] = 'X';
	else
		temp[1] = 'x';
	while (str[j])
	{
		temp[i] = str[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}
