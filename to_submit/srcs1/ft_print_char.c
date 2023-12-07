/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:24:33 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 14:56:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(t_list *list, int n)
{
	char	*temp;

	ft_scan_option(&list);
	free(list->content);
	temp = (char *) malloc (2 * sizeof(char));
	temp[0] = (char)n;
	temp[1] = '\0';
	list->content = ft_option_char(temp, list);
	list->len = ft_strlen(list->content);
	if (list->width > 1)
		list->len = list->width;
	if (list->len == 0)
		list->len = 1;
}
