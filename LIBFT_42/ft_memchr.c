/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:49:19 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 15:49:29 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
