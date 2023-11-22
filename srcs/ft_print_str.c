/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:26:53 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 19:41:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_list *list, char *str)
{
	free(list->content);
	if (str)
		list->content = ft_strdup(str);
	else
		list->content = ft_strdup("(null)");
	list->len = ft_strlen(list->content);
}
