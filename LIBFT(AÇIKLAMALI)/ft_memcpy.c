/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:27 by faacar            #+#    #+#             */
/*   Updated: 2023/07/11 22:06:16 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_p;
	unsigned char	*src_p;

	i = 0;
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst_p[i] = src_p[i];
		i++;
	}
	return (dst_p);
}

/*
#include <stdio.h>

// Bir bellek bölgesinin ilk n baytını kopyalar.
// Kaynak ve hedef bellek bölgeleri çakışabilir.
// ft_memmove() fonksiyonunun aksine, ft_memcpy() fonksiyonu kaynak ve hedef
// bellek bölgelerinin çakışmasını kontrol etmez ve çakışma durumunda
// ft_memcpy() fonksiyonu yanlış sonuçlar üretebilir.

int	main(void)
{
	char	str2[] ="frtyuşo";
	char	str1[] ="qwsxcda";
	printf("%s\n", ft_memcpy(str1, str2, 4));
	return (0);
}
 */
