/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:34:22 by nhan              #+#    #+#             */
/*   Updated: 2023/11/20 10:04:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printf(char const *fmt, ...)
{
	t_list	**list;
	int		size;
	va_list	args;

	list = ft_lstsplit(fmt);
	va_start(args, fmt);
	ft_replace(list, args);
	va_end(args);
	size = ft_lst_display(*list);
	free(list);
	return (size);
}
