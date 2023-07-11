/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:35:24 by faacar            #+#    #+#             */
/*   Updated: 2023/07/10 14:18:32 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	x;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str || !s1 || !s2)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	x = 0;
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		str[i] = s2[x];
		i++;
		x++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

// İki dizeyi birleştirerek yeni bir dize oluşturan bir fonksiyondur.
// Bu işlev, verilen iki dizinin içeriğini birleştirir ve
// sonuç olarak yeni bir dize döndürür.

int main()
{
	char *s1 = "Hello";
	char *s2 = "World";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
 */
