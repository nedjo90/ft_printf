/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:40:28 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 10:31:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_width_pad(char *id, int *tab)
{
	char	*temp;
	int		size;

	size = 0;
	while (ft_isdigit(id[size]))
		size++;
	temp = ft_substr(id, 0, size);
	*tab = ft_atoi(temp);
	free(temp);
	return (size);
}

void	ft_initialize_option(t_list **list)
{
	(*list)->minus = 0;
	(*list)->zero = 0;
	(*list)->plus = 0;
	(*list)->space = 0;
	(*list)->sharp = 0;
	(*list)->width = 0;
	(*list)->periode = 0;
	(*list)->precision = 0;
}

void	ft_scan_option(t_list **list)
{
	int	i;

	i = 0;
	ft_initialize_option(list);
	while (++i && !ft_iskey((*list)->content[i]))
	{
		if ((*list)->content[i] == '0' && !(*list)->periode)
			(*list)->zero = 1;
		else if ((*list)->content[i] == '-')
			(*list)->minus = 1;
		else if ((*list)->content[i] == '+')
			(*list)->plus = 1;
		else if ((*list)->content[i] == ' ')
			(*list)->space = 1;
		else if ((*list)->content[i] == '#')
			(*list)->sharp = 1;
		else if (!(*list)->periode && (*list)->content[i] != '0'\
			&& ft_isdigit((*list)->content[i]))
			i += ft_width_pad(((*list)->content) + i, &((*list)->width)) - 1;
		else if ((*list)->content[i] == '.')
			(*list)->periode = 1;
		else if ((*list)->periode && ft_isdigit((*list)->content[i]))
			i += ft_width_pad(((*list)->content) + i, \
				&((*list)->precision)) - 1;
	}
}
