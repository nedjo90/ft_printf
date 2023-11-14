/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:06:21 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 16:36:09 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	ret;

	ret = printf("voici un caractère = %c %scoucoujefais un test%s***%set on fini sur un autre char%c\
		on test les int%d\n%d\n%d\n%d\n%d\n", 'c', "testtesttest", "un autre test", "end", 'y', INT_MIN, INT_MAX, 0, -10, 15541);
	printf("\n*****************************");
	printf("\n%d", ret);
	printf("\n*****************************\n");
	ret = printf("voici un caractère = %c %scoucoujefais un test%s***%set on fini sur un autre char%c\
		on test les int%d\n%d\n%d\n%d\n%d\n", 'c', "testtesttest", "un autre test", "end", 'y', INT_MIN, INT_MAX, 0, -10, 15541);
	printf("\n*****************************");
	printf("\n%d", ret);
	return (0);
}
