/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_periode_zero_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:32:09 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 22:58:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_periode_zero_int(char *str)
{
	free(str);
	str = (char *) malloc (1 * sizeof(char));
	str[0] = '\0';
	return (str);
}
