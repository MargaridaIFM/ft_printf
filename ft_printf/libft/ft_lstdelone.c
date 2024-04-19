/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:07 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 16:04:36 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Delete element from the list and free the allocated memory of that node.
 Return Value None. */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*void delete_lst(void *content)
{
	free(content);
}
int main(void)
{
	t_list *head = NULL;
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "Hello";
	node2->content = "Darling";
	node3->content = "END";

	head = node3;
	node3->next = node2;
	node2->next = node1;
	node1->next = NULL;

	printf("Before free: %s\n", (char *)node2->content);
	ft_lstdelone(node1, &delete_lst);
	printf("Nodes: %s\n %s\n", (char *)node1->content, (char *)node3->content);
	free(node1->content);
    free(node1);
    free(node3->content);
    free(node3);
} */