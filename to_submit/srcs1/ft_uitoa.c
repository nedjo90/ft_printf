/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:29:46 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 15:56:53 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_nbu_len(unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	size;
	char			*nb;

	if (n == 0)
		return (ft_strdup("0"));
	size = ft_nbu_len(n);
	nb = ft_calloc(size-- + 1, sizeof(char));
	if (!nb)
		return (NULL);
	while (n > 0)
	{
		nb[size--] = (n % 10) + 48;
		n /= 10;
	}
	return (nb);
}
