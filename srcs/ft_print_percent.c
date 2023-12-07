/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:27:55 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 02:05:35 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_width_option_percent(char *str, int width)
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

char	*ft_minus_width_option_percent(char *str, int width)
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

char	*ft_option_percent(char *str, t_list *list)
{
	if (list->minus > 0 && list->width > 1)
		str = ft_minus_width_option_percent(str, list->width);
	else if (list->width > 1)
		str = ft_width_option_percent(str, list->width);
	if (list->zero)
		ft_zero_option(str);
	return (str);
}

void	ft_print_percent(t_list *list)
{
	ft_scan_option(&list);
	if (ft_strlen(list->content) == 1 && list->content[0] == '%')
	{
		list->content[0] = '\0';
	}
	else
	{
		free(list->content);
		list->content = ft_option_percent(ft_strdup("%"), list);
	}
	list->len = ft_strlen(list->content);
}
