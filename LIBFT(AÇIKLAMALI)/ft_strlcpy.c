/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:43:54 by faacar            #+#    #+#             */
/*   Updated: 2023/07/10 14:41:32 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize > 0)
	{
		while (src[index] != '\0' && index < (dstsize - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>

// Bir kaynak dizesinin belirli bir boyut sınırlamasıyla bir hedef diziye
// güvenli bir şekilde kopyalanmasını gerçekleştiren bir fonksiyondur.

int main(void) {
    char dst[11];
    const char src[] = "Hello World";
    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);
    printf("Return value: %zu\n", result);

    return 0;
}
 */
