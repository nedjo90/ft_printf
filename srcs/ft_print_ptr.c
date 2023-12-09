/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:27:27 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:23:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_list *list, int n)
{
	char	*temp;

	if (!list)
		return ;
	free(list->content);
	temp = ft_itoa(n);
	if (!temp)
		return ;
	list->content = temp;
	list->len = ft_strlen(list->content);
}
