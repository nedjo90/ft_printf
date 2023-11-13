/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:06:21 by nhan              #+#    #+#             */
/*   Updated: 2023/11/13 23:33:05 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct s_list {
	int				is_str;
	char			*str;
	struct s_list	*next;
}	t_list;
/*************************/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

t_list	*ft_lstnew(char *content, int str_bool)
{
	t_list	*new_list;

	new_list = (t_list *) malloc (sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(content);
	new_list->is_str = str_bool;
	new_list->next = NULL;
	return (new_list);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

char	*ft_put_operator(char *str)
{
}

int	ft_display_lst(t_list **lst)
{
	t_list	*suivant;
	char	*temp;
	size_t	count;

	count = 0;
	suivant = *lst;
	while (suivant != NULL)
	{
		if (suivant->is_str)
		{
			write (1, suivant->str, ft_strlen(suivant->str));
			count += ft_strlen(suivant->str);
		}
		else
		{
			temp = ft_put_operator(suivant->str);
			if (temp == NULL)
				return(0);
			count += temp;
		}
		suivant = suivant->next;
	}
	return (count);
}

int	ft_isoperator(char *str)
{
	if (*str == '%' && *(str + 1) == 's')
		return (1);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	n = (unsigned int)ft_strlen(s);
	if (start >= n)
		len = 0;
	if (n - start < len)
		len = n - start;
	if (len > n)
		len = n;
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && start < n)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_create_add_back(t_list **list, char *str, size_t len, int type)
{
	char	*content;

	content = ft_substr(str, 0, len);
	if (content == NULL)
		return ;
	ft_lstadd_back(list, ft_lstnew(content, type));
	free(content);
}

void	ft_lst_split(t_list **list, char *str)
{
	char	*temp;
	size_t	size;

	if (list == NULL)
		return ;
	while (*str != '\0')
	{
		size = 0;
		temp = str;
		while (*str != '\0' && !ft_isoperator(str))
		{
			str++;
			size++;
		}
		if (size)
			ft_create_add_back(list, temp, size, 1);
		if (ft_isoperator(str))
		{
			ft_lstadd_back(list, ft_lstnew("%s", 0));
			str += 2;
		}
	}
}

void	ft_lstclear(t_list **list)
{
	t_list	*temp;

	while (*list != NULL)
	{
		temp = (*list)->next;
		free((*list)->str);
		free(*list);
		*list=temp;
	}
	free(list);
	list = NULL;
}

int	ft_printf(const char *format)
{
	t_list	**list;
	size_t	count;

	if (format == NULL)
		return (0);
	list = (t_list **) malloc (sizeof(t_list *));
	if (list == NULL)
		return (0);
	*list = NULL;
	ft_lst_split(list, (char *)format);
	if (list != NULL && *list != NULL)
	{
		count = ft_display_lst(list);
		ft_lstclear(list);
		return (count);
	}
	return (0);
}

int	main(void)
{
	int	ret;

	ret = ft_printf("%scoucoujefais un test");
	printf("*****************************");
	printf("\n%d", ret);
	return (0);
}
