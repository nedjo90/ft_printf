/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoperator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:31:17 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:32:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isoperator(char *str)
{	
	if (*str != '%')
		return (0);
	else if (*(str + 1) == 'c')
		return (1);
	else if (*(str + 1) == 's')
		return (1);
	else if (*(str + 1) == 'p')
		return (1);
	else if (*(str + 1) == 'd')
		return (1);
	else if (*(str + 1) == 'i')
		return (1);
	else if (*(str + 1) == 'u')
		return (1);
	else if (*(str + 1) == 'x')
		return (1);
	else if (*(str + 1) == 'X')
		return (1);
	else if (*(str + 1) == '%')
		return (1);
	return (0);
}
