/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:32:59 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:33:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_create_add_back(t_print_list **list, char *str, size_t len, int type)
{
	char	*content;

	content = ft_substr(str, 0, len);
	if (content == NULL)
		return ;
	ft_printf_lstadd_back(list, ft_printf_lstnew(content, type));
	free(content);
}
