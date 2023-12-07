/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ul_to_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:46:36 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 14:47:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_address(unsigned long nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

char	*ft_ul_to_hexa(unsigned long nb)
{
	char	*base;
	char	*str;
	int		i;

	if (nb == 0)
		return (ft_strdup("0"));
	base = ft_strdup("0123456789abcdef");
	str = (char *) malloc ((ft_size_address(nb) + 1) * sizeof(char));
	i = 0;
	while (nb > 0)
	{
		str[i++] = base[nb % 16];
		nb /= 16;
	}
	str[i] = '\0';
	ft_strrev(str);
	free(base);
	return (str);
}
