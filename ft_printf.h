/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:22:14 by nhan              #+#    #+#             */
/*   Updated: 2023/11/15 00:36:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"
# include <limits.h>

typedef struct s_print_list{
	int				is_str;
	size_t				len;
	char			*str;
	struct s_print_list	*next;
}	t_print_list;


t_print_list	*ft_printf_lstnew(char *content, int str_bool);
void	ft_printf_lstadd_back(t_print_list **lst, t_print_list *new);
int	ft_display_lst(t_print_list **lst);
int	ft_isoperator(char *str);
void	ft_create_add_back(t_print_list **list, char *str, size_t len, int type);
void	ft_lst_split(t_print_list **list, char *str);
void	ft_print_lstclear(t_print_list **list);
void	ft_change_operator(t_print_list *list, va_list args);
int	ft_printf(const char *format, ...);
void	ft_print_str(char *old, char *new);
void	ft_print_char(char *old, int new);
void	ft_print_int(char *old, int n);
void	ft_print_uint(char *old, unsigned int n);
#endif
