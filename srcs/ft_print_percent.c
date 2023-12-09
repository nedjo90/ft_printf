/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:27:55 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:22:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_percent(t_list *list)
{
	if (!list)
		return ;
	if (ft_strlen(list->content) == 1 && list->content[0] == '%')
		list->content[0] = '\0';
	else
	{
		free(list->content);
		list->content = ft_strdup("%");
		if (!list->content)
			return ;
	}
	list->len = 1;
}
