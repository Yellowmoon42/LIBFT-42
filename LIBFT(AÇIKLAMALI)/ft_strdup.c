/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:17:30 by faacar            #+#    #+#             */
/*   Updated: 2023/07/04 10:17:30 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		idx;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dest)
		return (0);
	idx = 0;
	while (s1[idx])
	{
		dest[idx] = s1[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/*
#include <stdio.h>

// Bir giriş dizesini alır ve bellekte yeni bir
// hafıza bloğu ayırarak bu dizinin tam bir kopyasını oluşturur.
// Ardından, oluşturulan kopyanın başlangıç adresini döndürür.

int main()
{
	char *s = "Hello";
	printf("%s\n", ft_strdup(s));
	printf("%p\n", ft_strdup(s));
	return (0);
}
 */
