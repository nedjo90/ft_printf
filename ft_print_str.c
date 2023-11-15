/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:27:18 by nhan              #+#    #+#             */
/*   Updated: 2023/11/15 00:08:28 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *old, char *new)
{
	free(old);
	if (new == NULL)
		old = ft_strdup("(null)");
	else if (new) 
		old = ft_strdup(new);
	else
	{
		old = (char *) malloc (sizeof(char) * 2);
		old[0] = *new;
		old[1] = '\0';
	}
}
