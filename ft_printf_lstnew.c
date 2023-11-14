/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lstnew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:27:57 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:29:47 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print_list	*ft_printf_lstnew(char *content, int str_bool)
{
	t_print_list	*new_list;

	new_list = (t_print_list *) malloc (sizeof(t_print_list));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(content);
	new_list->is_str = str_bool;
	new_list->next = NULL;
	return (new_list);
}

