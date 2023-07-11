/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:18:05 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:18:05 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*
#include <stdio.h>

// Bir dizinin sonundan başlayarak bir karakteri arayan bir fonksiyondur.
// Return değeri karakterin bulunduğu adresi döndürür.

int	main()
{
	char *s = "Hello";
	char c = 'l';
	printf("%s\n", ft_strrchr(s, c));
	printf("%p", ft_strrchr(s, c));
	return (0);
}
 */
