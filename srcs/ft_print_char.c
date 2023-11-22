/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:24:33 by nhan              #+#    #+#             */
/*   Updated: 2023/11/22 20:11:38 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(t_list *list, int n)
{
	free(list->content);
	list->content = (char *) malloc (2 * sizeof(char));
	list->content[0] = (char)n;
	list->content[1] = '\0';
	list->len = 1;
}
