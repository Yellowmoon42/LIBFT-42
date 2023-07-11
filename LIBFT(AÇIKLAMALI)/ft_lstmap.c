/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/07/07 00:16:17 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:16:17 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*temp;
	void	*content;

	if (!lst || !f)
		return (0);
	ret = 0;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			ft_lstclear(&ret, del);
		if (!content)
			return (0);
		temp = ft_lstnew(content);
		if (!temp)
		{
			free(content);
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, temp);
		lst = lst->next;
	}
	return (ret);
}	

// Bir bağlı listedeki (linked list) her düğüm için belirli bir işlemi
// gerçekleştirerek yeni bir bağlı liste oluşturan bir fonksiyondur.
// Bu işlev, mevcut bir bağlı listenin her bir düğümünü dolaşarak belirtilen
// işlemi uygular ve işlemin sonucunda oluşan yeni düğümlerden
// oluşan bir bağlı liste döndürür.

/*
#include <stdio.h>
void	sil(void *con)
{
	ft_bzero(con, sizeof(con));
}
void	*fa(void *content)
{
	content = content + 2;
	return (content);
}
int	main(void)
{
	t_list	*liste = ft_lstnew((void *)49);
	t_list	*tut;
	size_t	i;

	for (i = 50; i < 55; i++)
	{
		ft_lstadd_back(&liste, ft_lstnew((void *)i));
	}
	tut = ft_lstmap(liste, fa, sil);
	printf("liste :\n");
	for (i = 49; i < 55; i++)
	{
		printf("%c - ",(char)(liste -> content));
		liste = liste -> next;
	}
	printf("\nsonuc :\n");
	for (i = 49; i < 55; i++)
	{
		printf("%c - ",(char)(tut -> content));
		tut = tut -> next;
	}

}
*/
