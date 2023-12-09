/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:24:33 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:16:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(t_list *list, int n)
{
	char	*temp;

	free(list->content);
	temp = (char *) malloc (2 * sizeof(char));
	if (!temp)
		return ;
	temp[0] = (char)n;
	temp[1] = '\0';
	list->content = temp;
	list->len = ft_strlen(list->content);
	if (list->len == 0)
		list->len = 1;
}
