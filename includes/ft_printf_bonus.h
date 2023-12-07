/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:26:58 by nhan              #+#    #+#             */
/*   Updated: 2023/12/07 03:18:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "ft_printf.h"
# include "../libft/libft.h"
# include <stdarg.h>

void	ft_scan_option(t_list **list);
void	ft_zero_option(char *str);
void	ft_zero_int(char *str, t_list *list);
void	ft_zero_sharp(char *str, int low_high);
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
#endif
