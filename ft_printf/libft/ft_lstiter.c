/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:11 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 16:22:45 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates the list ‘lst’ 
and applies the function to the content of all the nodes.
Return Value None.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = lst;
	if (!lst)
		return ;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
/* void ft_itenarate(void * content)
{
	printf("%s\n", (char *)content);
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

	ft_lstiter(node1, &ft_itenarate);
	free(node1);
    free(node2);
    free(node3);
	
} */