/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uitoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:38 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 19:42:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uitoa(t_list *list, unsigned int nb)
{
	free(list->content);
	list->content = ft_uitoa(nb);
	list->len = ft_strlen(list->content);
}
