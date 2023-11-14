/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:06:21 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 13:39:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	ret;

	ret = ft_printf("%scoucoujefais un test", "testtesttest");
	printf("\n*****************************");
	printf("\n%d", ret);
	printf("\n*****************************\n");
	ret = printf("%scoucoujefais un test", "testtesttest");
	printf("\n*****************************");
	printf("\n%d", ret);
	return (0);
}
