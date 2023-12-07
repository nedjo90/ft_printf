/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_periode_option.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:53:24 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 11:14:06 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_option(char *str, int precision)
{
	char	*temp;
	int		size;
	int		i;

	size = (int)ft_strlen(str);
	i = -1;
	if (size == precision)
		return (str);
	temp = (char *) malloc ((precision + 1) * sizeof(char));
	while (str[++i] && i < precision)
		temp[i] = str[i];
	while (i < precision)
	{
		temp[i] = ' ';
		i++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}
