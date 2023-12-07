/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:26:53 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 14:39:13 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_list *list, char *str)
{
	char	*temp;

	ft_scan_option(&list);
	free(list->content);
	if (str)
		temp = ft_strdup(str);
	else
		temp = ft_strdup("(null)");
	list->content = ft_option_str(temp, list);
	list->len = ft_strlen(list->content);
}
