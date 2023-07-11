/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:17:09 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:17:09 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

// İki bellek bölgesini karşılaştırır.
// Return olarak s1 ile s2 arasındaki farkı döndürür.

int main()
{
	char str1[] = "Hello 42";
	char str2[] = "Hello World!";
	printf("%d\n", ft_memcmp(str1, str2, 12));
	return (0);
}
 */
