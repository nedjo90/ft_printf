/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:06:21 by nhan              #+#    #+#             */
/*   Updated: 2023/11/14 21:06:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("");

/*
	//test char
	
	
	ft_printf("%c\n", 48);
	ft_printf("je fais un test coucou %c\n", 65);
	ft_printf("%c voici un autre test \n", 300);
	ft_printf("on essaie entre%clesdeux\n", 200);
	ft_printf("%c", '0');
	ft_printf(" %c ", '0');
	ft_printf(" %c", '0' - 256);
	ft_printf("%c ", '0' + 256);
	ft_printf(" %c %c %c ", '0', 0, '1');
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	ft_printf(" %c %c %c ", '1', '2', '3');
	ft_printf(" %c %c %c ", '2', '1', 0);
	ft_printf(" %c %c %c ", 0, '1', '2');	
	

	//test s
	//char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	//ft_printf("%s", "");
	ft_printf(" %s", "");
	ft_printf("%s ", "");
	ft_printf(" %s ", "");
	ft_printf(" %s ", "-");
	ft_printf(" %s %s ", "", "-");
	ft_printf(" %s %s ", " - ", "");
	//ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	ft_printf(" NULL %s NULL ", NULL);

	//test d
    ft_printf(" %d ", 0);
	ft_printf(" %d ", -1);
	ft_printf(" %d ", 1);
	ft_printf(" %d ", 9);
	ft_printf(" %d ", 10);
	ft_printf(" %d ", 11);
	ft_printf(" %d ", 15);
	ft_printf(" %d ", 16);
	ft_printf(" %d ", 17);
	ft_printf(" %d ", 99);
	ft_printf(" %d ", 100);
	ft_printf(" %d ", 101);
	ft_printf(" %d ", -9);
	ft_printf(" %d ", -10);
	ft_printf(" %d ", -11);
	ft_printf(" %d ", -14);
	ft_printf(" %d ", -15);
	ft_printf(" %d ", -16);
	ft_printf(" %d ", -99);
	ft_printf(" %d ", -100);
	ft_printf(" %d ", -101);
	ft_printf(" %d ", INT_MAX);
	ft_printf(" %d ", INT_MIN);
	ft_printf(" %d ", LONG_MAX);
	ft_printf(" %d ", LONG_MIN);
	ft_printf(" %d ", UINT_MAX);
	ft_printf(" %d ", ULONG_MAX);
	ft_printf(" %d ", 9223372036854775807LL);
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

//test i
    ft_printf(" %i ", 0);
	ft_printf(" %i ", -1);
	ft_printf(" %i ", 1);
	ft_printf(" %i ", 9);
	ft_printf(" %i ", 10);
	ft_printf(" %i ", 11);
	ft_printf(" %i ", 15);
	ft_printf(" %i ", 16);
	ft_printf(" %i ", 17);
	ft_printf(" %i ", 99);
	ft_printf(" %i ", 100);
	ft_printf(" %i ", 101);
	ft_printf(" %i ", -9);
	ft_printf(" %i ", -10);
	ft_printf(" %i ", -11);
	ft_printf(" %i ", -14);
	ft_printf(" %i ", -15);
	ft_printf(" %i ", -16);
	ft_printf(" %i ", -99);
	ft_printf(" %i ", -100);
	ft_printf(" %i ", -101);
	ft_printf(" %i ", INT_MAX);
	ft_printf(" %i ", INT_MIN);
	ft_printf(" %i ", LONG_MAX);
	ft_printf(" %i ", LONG_MIN);
	ft_printf(" %i ", UINT_MAX);
	ft_printf(" %i ", ULONG_MAX);
	ft_printf(" %i ", 9223372036854775807LL);
	ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

*/



	return (0);
}
