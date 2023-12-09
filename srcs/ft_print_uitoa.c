/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uitoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:38 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:25:00 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uitoa(t_list *list, unsigned int nb)
{
	char	*temp;

	if (!list)
		return ;
	free(list->content);
	temp = ft_uitoa(nb);
	if (!temp)
		return ;
	list->content = temp;
	list->len = ft_strlen(list->content);
}
