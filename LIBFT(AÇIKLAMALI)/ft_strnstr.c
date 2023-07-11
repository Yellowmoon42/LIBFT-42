/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:17:57 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:17:57 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] == needle[x] && (i + x) < len)
		{
			if (haystack[i + x] == '\0' && needle[x] == '\0')
				return ((char *)&haystack[i]);
			x++;
		}
		if (needle[x] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

// Bu fonksiyon bir dizideki bir alt diziye bakar ve alt dizinin ilk karakterinin
// konumunu döndürür. Eğer alt dizi bulunamazsa NULL döndürür.
int main()
{
	char *haystack = "Hello World";
	char *needle = "o";
	printf("%s\n", ft_strnstr(haystack, needle, 11));
	printf("%p\n", ft_strnstr(haystack, needle, 11));
	return (0);
}
 */
