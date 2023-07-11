/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:30:17 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 15:49:43 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (src > dst)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			p_dst[len] = p_src[len];
	}
	return (dst);
}

/*
#include <stdio.h>

// Bir bellek bölgesinin ilk n baytını kopyalar.
// Kaynak ve hedef bellek bölgeleri çakışabilir.
// ft_memcpy() fonksiyonunun aksine, ft_memmove() fonksiyonu kaynak ve hedef
// bellek bölgelerinin çakışmasını kontrol eder ve çakışma durumunda
// ft_memmove() fonksiyonu kaynak bellek bölgesini kopyaladıktan sonra
// hedef bellek bölgesini kopyalar.

int main()
{
	char str2[] = "qwsxcda";
	char str1[] = "frtyuş";
	printf("%s\n", ft_memmove(str1, str2, 4));
	return (0);
}
 */
