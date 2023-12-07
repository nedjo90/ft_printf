/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:30:50 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 19:38:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_address(t_list *list, unsigned long nb)
{
	char	*hexa;

	free(list->content);
	if (nb == 0)
		list->content = ft_strdup("0x0");
	else
	{
		hexa = ft_ul_to_hexa(nb);
		list->content = ft_strjoin("0x", hexa);
		free(hexa);
	}
	list->len = ft_strlen(list->content);
}
