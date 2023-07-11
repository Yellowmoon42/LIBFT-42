/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/07/07 00:20:36 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:20:36 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// Bir bağlı listeye (linked list) yeni bir düğümü
// t_list) yapısının önüne yeni bir düğüm (new) eklemek için kullanılır.

/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste;

	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%c", (char)(liste -> content));
}
*/
