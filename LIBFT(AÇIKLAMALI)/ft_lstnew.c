/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 00:15:04 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:15:04 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}

// Yeni bir bağlı liste düğümü oluşturmak için kullanılan bir fonksiyondur.
// Bu işlev, bir bağlı listenin düğümünü oluşturur ve içeriğini
// belirtilen içerikle doldurur.

/*
#include <stdio.h>
int	main(void)
{
	t_list *selam = ft_lstnew((void *)'y');

	printf("%c", (char)(selam -> content));
}
*/
