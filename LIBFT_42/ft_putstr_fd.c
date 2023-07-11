/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:31:17 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 16:31:21 by faacar           ###   ########.fr       */
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
