/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:45:13 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 20:45:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_space_option(char *str)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *) malloc ((ft_strlen(str) + 2) * sizeof(char));
	i = 0;
	j = 0;
	temp[i] = ' ';
	i++;
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
