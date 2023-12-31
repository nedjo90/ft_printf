/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:32:19 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 10:58:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 && size == 0)
		count = 1;
	else if (count == 0 || size == 0)
		return (NULL);
	else if ((((int)count < 0 && (int)size < 0) \
		|| count >= 2147483647 || size >= 2147483647))
		return (NULL);
	ptr = malloc((int)size * (int)count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
