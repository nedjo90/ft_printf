/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_low_high.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:33:03 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 19:39:40 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_low_high(t_list *list, unsigned int nb, int low_high)
{
	free(list->content);
	list->content = ft_uint_to_hex(nb, low_high);
	list->len = ft_strlen(list->content);
}
