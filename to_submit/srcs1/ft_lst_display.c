/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:53:59 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 11:02:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lst_display(t_list *list)
{
	t_list	*lstemp;
	int		count;

	if (list == NULL)
		return (0);
	count = 0;
	while (list != NULL)
	{
		write(1, list->content, list->len);
		count += list->len;
		if (list->content)
			free(list->content);
		lstemp = list->next;
		free(list);
		list = lstemp;
	}
	return (count);
}
