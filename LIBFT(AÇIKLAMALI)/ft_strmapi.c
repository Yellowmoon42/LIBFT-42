/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:41:52 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 17:49:04 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!str || !f)
		return (0);
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (str[i])
	{
		ptr[i] = f(i, str[i]);
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

// İşlevi, bir dize üzerinde her karakter için
// belirli bir işlemi gerçekleştiren bir fonksiyondur.
// İşlev, her karakterin indisini ve değerini işleme sokar
// ve sonuç olarak yeni bir dize döndürür.

char uppercase_char(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); // Küçük harfi büyük harfe dönüştür
    }
    return c;
}

int main(void) {
    const char str[] = "hello, World!";
    char *result = ft_strmapi(str, &uppercase_char);

    printf("Transformed string: %s\n", result);


    free(result); // Hafızayı serbest bırak

    return 0;
}
 */
