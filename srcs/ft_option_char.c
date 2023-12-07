/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:17:50 by nhan              #+#    #+#             */
/*   Updated: 2023/12/06 15:14:22 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_width_option_char(char *str, int width)
{
	char	*temp;
	int		i;

	temp = (char *) malloc ((width + 1) * sizeof(char));
	i = 0;
	while (i < width - 1)
	{
		temp[i] = ' ';
		i++;
	}
	temp[i] = str[0];
	i++;
	temp[i] = '\0';
	free(str);
	return (temp);
}

char	*ft_minus_width_option_char(char *str, int width)
{
	char	*temp;
	int		i;

	temp = (char *) malloc ((width + 1) * sizeof(char));
	i = 0;
	temp[i] = str[0];
	i++;
	while (i < width)
	{
		temp[i] = ' ';
		i++;
	}
	temp[i] = '\0';
	free(str);
	return (temp);
}

char	*ft_option_char(char *str, t_list *list)
{
	if (list->minus > 0 && list->width > 1)
		str = ft_minus_width_option_char(str, list->width);
	else if (list->width > 1)
		str = ft_width_option_char(str, list->width);
	if (list->zero)
		ft_zero_option(str);
	return (str);
}
