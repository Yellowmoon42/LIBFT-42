/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:14:14 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:14:14 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)(s));
		s++;
	}
	if (*s == (char)c)
		return ((char *)(s));
	return (0);
}

/*
#include <stdio.h>

// Bir giriş dizesi ve aranacak bir karakter alır.
// Ardından, giriş dizisindeki karakterleri soldan sağa doğru tarar
// Ve belirtilen karakteri bulduğu ilk konumun adresini döndürür.

int	main()
{
	char *s = "Hello";
	char c = 'l';
	printf("%s\n", ft_strchr(s, c));
	printf("%p\n", ft_strchr(s, c));
	return (0);
}
 */
