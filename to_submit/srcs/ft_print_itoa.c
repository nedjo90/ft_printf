/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:48:28 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 19:40:06 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_itoa(t_list *list, int nb)
{
	free(list->content);
	list->content = ft_itoa(nb);
	list->len = ft_strlen(list->content);
}
