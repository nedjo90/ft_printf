/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_periode_zero_add.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:18:49 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 01:50:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_zero_add(char *str)
{
	free(str);
	str = (char *) malloc (3 * sizeof(char));
	str[0] = '0';
	str[1] = 'x';
	str[2] = '\0';
	return (str);
}
