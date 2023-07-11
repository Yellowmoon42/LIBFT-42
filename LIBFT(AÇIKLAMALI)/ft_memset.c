/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:50:04 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 15:49:03 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

// Bir bellek bölgesinin ilk n baytını c ile doldurur.

int main()
{
	char str[] = "Hello World!";
	printf("%s\n", ft_memset(str, 'a', 6));
	return (0);
}
 */
