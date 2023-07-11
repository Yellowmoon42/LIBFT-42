/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:33:11 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 16:33:21 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	di = ft_strlen(dst);
	si = 0;
	while (src[si] != '\0' && di + 1 < dstsize)
	{
		dst[di++] = src[si++];
	}
	dst[di] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[si]));
}
