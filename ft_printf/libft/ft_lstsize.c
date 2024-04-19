/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:32 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 13:40:20 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Count the number of nodes in a list.
Return the size of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	idx;

	idx = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		idx++;
	}
	return (idx);
}
/* int main()
{
	t_list *head = NULL;
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 ="Goodbye";
	int list_size;
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	node1->content = cont1;
	node2->content = cont2;
	node3->content = cont3;
	
	head = node3;
	node3->next = node2;
	node2->next = node1;
	node1->next = NULL;
	list_size = ft_lstsize(head);
	printf("Size: %d\n", list_size);

	free(node1);
	free(node2);
	free(node3);
}
 */