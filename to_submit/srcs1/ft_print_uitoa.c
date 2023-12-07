/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uitoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:38 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 22:02:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uitoa(t_list *list, unsigned int nb)
{
	char	*temp;

	ft_scan_option(&list);
	free(list->content);
	temp = ft_uitoa(nb);
	list->content = ft_option_uitoa(temp, list);
	list->len = ft_strlen(list->content);
}
