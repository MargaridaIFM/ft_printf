#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *node;


	if (!f || !lst)
		return (NULL);
    new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*int main()
{
    t_list *head  = malloc(sizeof(t_list));

    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = "Node 1";
    node2->content = "Node 2";
    node3->content = "Node 3";

    head->next = node3;
    node3->next = node2;
    node2->next = node1;
    node1->next = NULL;

    printf("before free: %s\n", (char *)node2->content);
}*/