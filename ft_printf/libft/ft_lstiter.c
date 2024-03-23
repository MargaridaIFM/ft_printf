#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = lst;
	if (!lst)
		return ;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}