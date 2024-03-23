#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    if(*lst != NULL)
        {
            ft_lstlast(*lst)->next = new;
        }
    else
        *lst = new;
}
/*int main()
{
    t_list *head = NULL;

    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));
    node1->content = "Node 1";
    node2->content = "Node 2";
    node3->content = "Node 3";
    node4->content = "FINAL";

    head = node3;
    node3->next = node2;
    node2->next = node1;
    node1->next = NULL;


    ft_lstadd_back(&head, node4);
    t_list *last = ft_lstlast(head);
    printf("Last list: %s\n", (char *)last->content);

    free(node1);
    free(node2);
    free(node3);
}*/