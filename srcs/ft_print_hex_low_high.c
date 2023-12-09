/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_low_high.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:33:03 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:18:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_low_high(t_list *list, unsigned int nb)
{
	char	*temp;
	int		low_high;

	if (!list)
		return ;
	low_high = 0;
	if (list->content[1] == 'X')
		low_high = 1;
	free(list->content);
	temp = ft_uint_to_hex(nb, low_high);
	list->content = temp;
	list->len = ft_strlen(list->content);
}
