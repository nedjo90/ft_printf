/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:27:27 by nhan              #+#    #+#             */
/*   Updated: 2023/12/05 15:30:42 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_list *list, int n)
{
	char	*temp;

	free(list->content);
	temp = ft_itoa(n);
	list->content = ft_option_ptr(temp, list);
	list->len = ft_strlen(list->content);
}
