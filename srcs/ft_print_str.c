/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:26:53 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:25:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_list *list, char *str)
{
	char	*temp;

	if (!list)
		return ;
	free(list->content);
	if (str)
		temp = ft_strdup(str);
	else
		temp = ft_strdup("(null)");
	if (!temp)
		return ;
	list->content = temp;
	list->len = ft_strlen(list->content);
}
