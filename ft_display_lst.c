/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:13 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:31:00 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_lst(t_print_list **lst)
{
	t_print_list	*suivant;
	size_t	count;

	count = 0;
	suivant = *lst;
	while (suivant != NULL)
	{
		write (1, suivant->str, ft_strlen(suivant->str));
		count += ft_strlen(suivant->str);
		suivant = suivant->next;
	}
	return (count);
}
