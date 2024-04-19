/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:18 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 14:06:25 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Find the last element of the list and return it. */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* int main(void)
{
	t_list *head = NULL;
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 ="Goodbye";
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node3 = ft_lstnew((void *)cont3);
	head = node3;
	node3->next = node1;
	node2->next = NULL;
	t_list *last = ft_lstlast(head);
	printf("Last element: %s\n", (char *)last->content);
	free(node1);
	free(node2);
	free(node3);
} */