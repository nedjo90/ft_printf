/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:48:28 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:20:11 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_itoa(t_list *list, int nb)
{
	char	*temp;

	if (!list)
		return ;
	free(list->content);
	temp = ft_itoa(nb);
	if (!temp)
		return ;
	list->content = temp;
	list->len = ft_strlen(list->content);
}
