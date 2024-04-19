/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:52 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 15:06:33 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Add a new element at the end of the list.
Return Value None.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
		*lst = new;
}
/* int main()
{
	t_list *head = NULL;
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 = "END";
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node3 = ft_lstnew((void *)cont3);
	head = node2;
	node2->next = node1;
	node1->next = NULL;
	ft_lstadd_back(&head, node3);
	t_list *last = ft_lstlast(head);
	printf("Last element: %s\n", (char *)last->content);

	free(node1);
	free(node2);
	free(node3);
	return(0);
}  */