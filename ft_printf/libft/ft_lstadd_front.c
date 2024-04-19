/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:56 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 13:27:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Add a new node at the beginning of the list.
Return Value None.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main (void)
{
	t_list *head = NULL;
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 ="Goodbye";
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	printf("TESTING FT_LSTADD_FRONT\n\n");
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node3 = ft_lstnew((void *)cont3);
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	while (head != NULL)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	free(node1);
	free(node2);
	free(node3);
}  */