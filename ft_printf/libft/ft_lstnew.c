/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:28 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 12:50:42 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocate memory and create new list (node).
Return the new node(is initialized with NULL). */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* int main(void)
{
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 = "Goodbye";
	t_list *node1;
	t_list *node2;
	t_list *node3;
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node3 = ft_lstnew((void *)cont3);
	node1->next = node2;
	node2->next = node3;
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);
	free(node1);
	free(node2);
	free(node3);
	printf("\n");
}
 */