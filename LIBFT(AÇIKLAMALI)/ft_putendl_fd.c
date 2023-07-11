/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:46:54 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 16:34:42 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
#include <fcntl.h>

// Bir stringi dosyaya yazar.
// Yazdıktan sonra alt satıra geçer.

int	main(void)
{
	char	*s;
	char	*s1;
	int		fd;

	s = "Hello";
	s1 = "42";
	fd = open("test.txt",O_RDWR | O_CREAT);
	// Bu iki bayrağın birleşimi O_RDWR | O_CREAT,
	// dosyanın hem okuma hem de yazma
	// işlemleri için açılacağını ve dosya mevcut
	// değilse yeni bir dosyanın oluşturulacağını belirtir.
	ft_putendl_fd(s, fd);
	ft_putstr_fd(s1, fd);
	return (0);
}
*/
