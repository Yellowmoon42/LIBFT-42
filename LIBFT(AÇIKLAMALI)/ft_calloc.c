/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:15:14 by faacar            #+#    #+#             */
/*   Updated: 2023/07/05 17:15:14 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * count);
	if (!buffer)
		return (0);
	ft_bzero(buffer, size * count);
	return (buffer);
}

/*
#include <stdio.h>

// Bir bellek bölgesini sıfırlar.

int main()
{
	char *str = ft_calloc(10, sizeof(char));
	printf("%s\n", str); // calloc null atar
	return (0);
} */
