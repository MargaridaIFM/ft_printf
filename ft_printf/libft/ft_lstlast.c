#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return(NULL);
    while(lst->next != NULL)
        lst =lst->next;
    return(lst);
}
/*int main(void)
{
    char *cont1 = "Hello";
    char *cont2 = "Darling";
    char *cont3 ="Goodbye";
    t_list *node1;
    t_list *node2;
    t_list *node3;
	printf("TESTING FT_LSTLAST\n\n");
    node1 = ft_lstnew((void *)cont1);
    node2 = ft_lstnew((void *)cont2);
    node3 = ft_lstnew((void *)cont3);
    node1->next = node2;
    node2->next = node3;
    printf("%s\n", (char *)node1->content);
    printf("%s\n", (char *)node2->content);
    printf("%s\n", (char *)node3->content);
    t_list *last_node = ft_lstlast(node1);
    if (last_node != NULL)
        printf("Last node content: %s\n", (char *)last_node->content);
    else
        printf("List is empty.\n");
    free(node1);
    free(node2);
    free(node3);
	printf("\n");
}*/
