/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:14:37 by faacar            #+#    #+#             */
/*   Updated: 2023/07/06 15:18:39 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n && (s1[idx] || s2[idx]))
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}

/*
#include <stdio.h>

// İki dizinin belirli bir karakter sayısıyla
// karşılaştırılmasını gerçekleştiren bir fonksiyondur.
// Return olarak s1 ile s2 arasındaki farkı döndürür.

int	main()
{
	char *s1 = "Hello";
	char *s2 = "hocaeli";
	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}
 */
