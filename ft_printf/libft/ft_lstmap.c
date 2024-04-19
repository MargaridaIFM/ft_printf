/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:23 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 15:18:38 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates the list ‘lst’ and applies the function to the content of all nodes.
Them creates a new list with the modifications and removes the previous nodes.
Return the new list ou NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/* void *iterate(void *content)
{
    int *num = (int *)content;
    return (num);
}
void del_int(void *content)
{
    free(content);
} */

/* 
int main()
{
    int content1 = 10;
    int content2 = 20;
    int content3 = 30;

    t_list *elem1 = ft_lstnew(&content1);
    t_list *elem2 = ft_lstnew(&content2);
    t_list *elem3 = ft_lstnew(&content3);

    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = NULL;

    t_list *mapped_list = ft_lstmap(elem1, &iterate, &del_int);

    while (mapped_list != NULL)
    {
        printf("%d\n", *(int *)(mapped_list->content));
        mapped_list = mapped_list->next;
    }
    
    ft_lstclear(&elem1, &del_int);
    ft_lstclear(&mapped_list, &del_int);
	free(elem1);
	free(elem2);
	free(elem3);
    return 0;
}  */