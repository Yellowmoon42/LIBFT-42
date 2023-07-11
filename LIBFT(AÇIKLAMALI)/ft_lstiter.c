/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 00:17:37 by faacar            #+#    #+#             */
/*   Updated: 2023/07/07 00:17:37 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == 0)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Bağlı listenin düğümlerinde bir dizi işlemi gerçekleştirmek
// için kullanılabilir. İşlem, işlev göstericisi (f) aracılığıyla
// belirtilir ve her bir düğüm üzerinde uygulanır.

/*
#include <stdio.h>
void	fa(void *content)
{
	//ft_memset(content, 'a', 0);
	memset(content, 48, strlen(content));
}
int	main(void)
{
	char a[] = "ff";
	char b[] = "gg";
	char c[] = "yy";
	t_list	*liste = ft_lstnew(a);
	t_list	*tut;
	size_t	i;

	ft_lstadd_back(&liste, ft_lstnew(b));
	ft_lstadd_back(&liste, ft_lstnew(c));


	//eskisini yazdir
	printf("eski :\n");
	tut = liste;
	for (i = 49; i < 52; i++)
	{
		printf("%s - ",(tut -> content));
		tut = tut -> next;
	}

	ft_lstiter(liste, fa);
	//yenisini yazdir
	printf("\nyeni :\n");
	for (i = 49; i < 52; i++)
	{
		printf("%s - ",(liste -> content));
		liste = liste -> next;
	}
}
*/
