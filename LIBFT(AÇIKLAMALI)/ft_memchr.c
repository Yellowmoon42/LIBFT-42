/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:16:04 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:16:04 by faacar           ###   ########.fr       */
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

/*
#include <stdio.h>

// Bir bellek bölgesindeki ilk c karakterini arar.
// Return olarak bulduğu adresi döndürür.

int main()
{
	char str[] = "Hello World!";
	printf("%s\n", ft_memchr(str, 'W', 12));
	printf("%p\n", ft_memchr(str, 'W', 12));
	return (0);
}
 */
