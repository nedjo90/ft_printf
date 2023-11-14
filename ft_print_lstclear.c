/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lstclear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:35:20 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:35:40 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_lstclear(t_print_list **list)
{
	t_print_list	*temp;

	while (*list != NULL)
	{
		temp = (*list)->next;
		free((*list)->str);
		free(*list);
		*list=temp;
	}
	free(list);
	list = NULL;
}
