/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:33:24 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:33:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lst_split(t_print_list **list, char *str)
{
	char	*temp;
	size_t	size;

	if (list == NULL)
		return ;
	while (*str != '\0')
	{
		size = 0;
		temp = str;
		while (*str != '\0' && !ft_isoperator(str))
		{
			str++;
			size++;
		}
		if (size)
			ft_create_add_back(list, temp, size, 1);
		if (ft_isoperator(str))
		{	
			ft_create_add_back(list, str, 2, 0);
			str += 2;
		}
	}
}
