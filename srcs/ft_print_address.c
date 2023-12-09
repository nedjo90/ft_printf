/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:30:50 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:15:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_address(t_list *list, unsigned long nb)
{
	char	*hexa;
	char	*temp;

	free(list->content);
	if (nb == 0)
		temp = ft_strdup(NULL_PTR);
	else
	{
		hexa = ft_ul_to_hexa(nb);
		temp = ft_strjoin("0x", hexa);
		free(hexa);
	}
	if (!temp)
		return ;
	list->content = temp;
	list->len = ft_strlen(list->content);
}
