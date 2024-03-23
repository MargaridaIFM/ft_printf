#include "libft.h"
// Libertar a memoria primeiro da *string e depois do **string;
void	ft_freeup(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}