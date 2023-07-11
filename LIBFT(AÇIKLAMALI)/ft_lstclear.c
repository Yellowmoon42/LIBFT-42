/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/07/07 00:19:52 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:19:52 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == 0 || del == 0)
		return ;
	while (*lst != 0)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = 0;
}

// Bir bağlı listeyi (linked list) baştan sona doğru dolaşarak, düğümleri ve
// içeriklerini serbest bırakan (free) bir fonksiyondur. Bu işlev, bir bağlı
// listeyi tamamen temizlemek ve belleği serbest bırakmak için kullanılır.

/*
#include <stdio.h>
void ft_del(void *content)
{
	bzero(content, sizeof(content));
}
int	main()
{
	char l[] = "start";
	char s0[] = "student0";
	char s1[] = "student1";
	char s2[] = "student2";
	t_list *lst = ft_lstnew(l);
	t_list *student0 = ft_lstnew(s0);
	t_list *student1 = ft_lstnew(s1);
	t_list *student2 = ft_lstnew(s2);

	ft_lstadd_back(&lst, student0);
	ft_lstadd_back(&lst, student1);
	ft_lstadd_back(&lst, student2);
	ft_lstclear(&lst, ft_del);
	while(lst)
	{
		printf("%s\n",(char *)lst->content);
		lst = lst->next;
	}
}
*/
