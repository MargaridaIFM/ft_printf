#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new )
        return;
    new->next = *lst;
    *lst = new;
}
/*int main (void)
{
    char *cont1 = "Hello";
    char *cont2 = "Darling";
    char *cont3 ="Goodbye";
    t_list *node1;
    t_list *node2;
    t_list *node3;
	printf("TESTING FT_LSTADD_FRONT\n\n");
    node1 = ft_lstnew((void *)cont1);
    node2 = ft_lstnew((void *)cont2);
    node3 = ft_lstnew((void *)cont3);
    t_list *list = NULL;
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(node1);
    free(node2);
    free(node3);   
}*/