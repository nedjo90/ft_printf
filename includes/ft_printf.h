/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:29:57 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 15:45:09 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *fmt, ...);
int	ft_conversion_symbol(char *haystack);
int	ft_print_char(int c);
int	ft_print_conversion(char *fmt, va_list *args);
int	ft_print_integer(int number);
int	ft_print_percent(char c);
int	ft_print_str(char *str);

#endif
