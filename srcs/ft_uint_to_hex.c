/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:21 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 16:57:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_uint(unsigned int nb)
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

char	*ft_uint_to_hex(unsigned int nb, int low_high)
{
	char	*base;
	char	*str;
	int		i;

	if (nb == 0)
		return (ft_strdup("0"));
	if (low_high == 0)
		base = ft_strdup("0123456789abcdef");
	else
	{
		base = ft_strdup("0123456789ABCDEF");
	}
	str = (char *) malloc ((ft_size_uint(nb) + 1) * sizeof(char));
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
