/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:03 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/18 14:55:44 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Delete and free the allocated memory of a sequence of elements
of the list from a starting point.
The pointe to the list is set with NULL
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
/*void delete_lst(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
	
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "Hello";
	node2->content = "Darling";
	node3->content = "END";

	head->next = node3;
	node3->next = node2;
	node2->next = node1;
	node1->next = NULL;

	printf("before free: %s\n", (char *)node2->content);
	ft_lstclear(&head, &delete_lst);
} */