/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:48:28 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 15:43:15 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_itoa(t_list *list, int nb)
{
	char	*temp;

	ft_scan_option(&list);
	free(list->content);
	temp = ft_itoa(nb);
	list->content = ft_option_itoa(temp, list);
	list->len = ft_strlen(list->content);
}
