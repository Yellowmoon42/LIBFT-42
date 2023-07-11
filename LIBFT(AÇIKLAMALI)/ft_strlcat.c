/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:18 by faacar            #+#    #+#             */
/*   Updated: 2023/07/10 14:35:20 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	di = ft_strlen(dst);
	si = 0;
	while (src[si] != '\0' && di + 1 < dstsize)
	{
		dst[di++] = src[si++];
	}
	dst[di] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[si]));
}
/*
#include <stdio.h>

// İşlevi, bir hedef dizeye kaynak bir dizeyi belli bir
// boyut sınırlamasıyla güvenli bir şekilde ekleyen bir fonksiyondur.
// Return olarak hedef dizinin uzunluğunu döndürür.

int main()
{
	char dst[20] = "Hello  ";
    const char src[] = "World";
    size_t result = ft_strlcat(dst, src, 8);

    printf("Concatenated string: %s\n", dst);
    printf("Return value: %zu\n", result);

	return (0);
}
 */
