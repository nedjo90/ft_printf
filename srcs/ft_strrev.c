/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:43:38 by nhan              #+#    #+#             */
/*   Updated: 2023/12/09 18:27:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_strrev(char *str)
{
	char	t;
	int		i;
	int		j;

	if (!str)
		return ;
	i = ft_strlen(str) - 1;
	j = 0;
	while (j <= i / 2)
	{
		t = str[j];
		str[j] = str[i - j];
		str[i - j] = t;
		j++;
	}
}
