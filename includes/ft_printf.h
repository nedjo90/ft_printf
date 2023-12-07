/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:26:58 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 03:20:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

//fonctions
t_list	**ft_lstsplit(char const *fmt);
void	ft_replace(t_list **list, va_list args);
void	ft_print_char(t_list *list, int n);
void	ft_print_str(t_list *list, char *str);
void	ft_print_ptr(t_list *list, int n);
void	ft_print_percent(t_list *list);
void	ft_print_address(t_list *list, unsigned long nb);
void	ft_print_itoa(t_list *list, int nb);
void	ft_print_uitoa(t_list *list, unsigned int nb);
void	ft_print_hex_low_high(t_list *list, unsigned int nb);
void	ft_strrev(char *str);
void	ft_scan_option(t_list **list);
void	ft_zero_option(char *str);
void	ft_zero_int(char *str, t_list *list);
void	ft_zero_sharp(char *str, int low_high);
char	*ft_ul_to_hexa(unsigned long nb);
char	*ft_uint_to_hex(unsigned int nb, int low_high);
char	*ft_uitoa(unsigned int n);
char	*ft_option_str(char *str, t_list *list);
char	*ft_option_char(char *str, t_list *list);
char	*ft_option_address(char *str, t_list *list);
char	*ft_option_ptr(char *str, t_list *list);
char	*ft_option_hex(char *str, t_list *list, int low_high);
char	*ft_option_itoa(char *str, t_list *list);
char	*ft_option_uitoa(char *str, t_list *list);
char	*ft_periode_option(char *str, int precision);
char	*ft_width_option(char *str, int width);
char	*ft_minus_width_option(char *str, int width);
char	*ft_space_option(char *str);
char	*ft_periode_int(char *str, int precision);
char	*ft_periode_zero_int(char *str);
char	*ft_plus_option(char *str);
char	*ft_sharp_option(char *str, int low_high);
char	*ft_periode_zero_add(char *str);
char	*ft_periode_add(char *str, int precision);
int		ft_printf(const char *fmt, ...);
int		ft_lst_display(t_list *list);
int		ft_iskey(int c);
#endif
