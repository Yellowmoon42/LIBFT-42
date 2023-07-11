/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/07/07 00:05:17 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:05:17 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst != 0)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// Bir bağlı listenin boyutunu döndürmek için kullanılan bir fonksiyondur.
// Boyut, bağlı listenin düğümlerinin sayısıdır.

/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste = ft_lstnew((void *)64);

	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%d", ft_lstsize(liste));
}
*/
