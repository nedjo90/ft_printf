/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:13 by nhan              #+#    #+#             */
/*   Updated: 2023/11/15 00:17:23 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_lst(t_print_list **lst)
{
	t_print_list	*suivant;
	size_t	count;
	size_t	n;

	count = 0;
	suivant = *lst;
	while (suivant != NULL)
	{
		n = ft_strlen(suivant->str);
		if (n > 0)
		{
			write (1, suivant->str, n);
			count += n;
		}
		else
		{
			write(1, suivant->str, 1);
		}
		suivant = suivant->next;
	}
	return (count);
}
