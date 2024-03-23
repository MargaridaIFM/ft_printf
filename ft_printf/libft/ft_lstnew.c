#include "libft.h"

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
/*int main(void)
{
	char *cont1 = "Hello";
	char *cont2 = "Darling";
	char *cont3 = "Goodbye";
	t_list *node1;
	t_list *node2;
	t_list *node3;
	printf("TESTING FT_LSTNEW\n\n");
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node3 = ft_lstnew((void *)cont3);
	node1->next = node2;
	node2->next = node3;
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);
	printf("\n");
	printf("\n");
	free(node1);
	free(node2);
	free(node3);
	printf("\n");

}*/