/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_standard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:13:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/04 17:43:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char** argv)
{
	int value = printf("test %% %c %s", 'i', "coucou");
	printf("\nsize => %i", value); 	
}