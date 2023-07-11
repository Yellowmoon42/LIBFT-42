/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:53:56 by faacar            #+#    #+#             */
/*   Updated: 2023/07/11 19:03:51 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
			if (!str[i])
				return (ft_free(str, i));
			i++;
			s += ft_strchr(s, c) - s;
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}
/*
#include <stdio.h>

// Giriş dizesini (bir karakter dizisi veya metin) alır ve
// bu dizedeki kelimeleri veya alt dizeleri
// belirli bir ayırıcı karaktere göre böler.
// Ayırıcı karakter genellikle bir boşluk karakteridir,
// ancak başka bir karakter de seçilebilir.

int main()
{
	char **str;
	int i;

	str = ft_split("lorem ipsum dolor sit amet, consecte. spendisse", ' ');
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
*/
