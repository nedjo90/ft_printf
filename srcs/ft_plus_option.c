/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:30:43 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 21:31:00 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_plus_option(char *str)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *) malloc ((ft_strlen(str) + 2) * sizeof(char));
	i = 1;
	j = 0;
	temp[0] = '+';
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
