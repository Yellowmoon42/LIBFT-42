/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:45:54 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 15:48:40 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx])
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
}
/*
#include <fcntl.h>
#include <stdio.h>

// Bir stringi dosyaya yazar.

int	main()
{
	char *s = "Hello";

	int fd = open("test.txt",O_RDWR | O_CREAT);
	ft_putstr_fd(s, fd);
	return (0);
}
 */
