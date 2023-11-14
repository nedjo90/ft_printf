/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_operator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:36:10 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:37:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_change_operator(t_print_list *list, va_list args)
{	
	while (list != NULL)
	{
		if (list->is_str == 0)
		{
			if (list->str[1] == 's')
			{
				free(list->str);
				list->str = strdup(va_arg(args, char *));
			}
			else
			{	
				free(list->str);
				list->str = strdup("(other)");
			}
		}
		list=list->next;
	}
}
