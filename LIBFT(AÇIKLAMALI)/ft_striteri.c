/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:43:37 by faacar            #+#    #+#             */
/*   Updated: 2023/07/08 12:13:58 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include "libft.h"

// i değeri, mevcut karakterin konumunu belirtirken,
// &s[i] ifadesi mevcut karakterin adresini temsil eder.
// İşlev, str parametresi olarak işlem yapılacak olan dizeyi alır
// Ve f parametresi olarak bir işlev göstericisi alır.
// f işlevi, her karakterin indisini ve değerini alır
// Ve bu karakter üzerinde belirli bir işlem gerçekleştirir.

void print_character(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

int main(void)
{
	char s[] = "Hello, world!";

	ft_striteri(s, print_character);
	return 0;
}
*/
