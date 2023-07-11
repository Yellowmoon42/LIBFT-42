/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:51:44 by faacar            #+#    #+#             */
/*   Updated: 2023/07/10 15:53:17 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	len;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	ft_memcpy(res, s1, len);
	res[len] = '\0';
	return (res);
}

/*
#include <stdio.h>

// Bir dizenin başındaki ve sonundaki belirli bir karakter
// kümesini kırparak,yeni bir dize oluşturan bir fonksiyondur.

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "acbcbcabdcHelloabc";
	set = "cab";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
 */
