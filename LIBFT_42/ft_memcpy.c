/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:50:06 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 15:50:09 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_p;
	unsigned char	*src_p;

	i = 0;
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst_p[i] = src_p[i];
		i++;
	}
	return (dst_p);
}
