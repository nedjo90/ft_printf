/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:26:58 by nhan              #+#    #+#             */
/*   Updated: 2023/11/26 17:18:24 by nhan             ###   ########.fr       */
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
void	ft_print_hex_low_high(t_list *list, unsigned int nb, int low_high);
void	ft_strrev(char *str);
char	*ft_ul_to_hexa(unsigned long nb);
char	*ft_uint_to_hex(unsigned int nb, int low_high);
char	*ft_uitoa(unsigned int n);
int		ft_printf(const char *fmt, ...);
int		ft_lst_display(t_list *list);
#endif
