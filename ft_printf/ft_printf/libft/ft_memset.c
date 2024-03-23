#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	idx;
	char	*str;

	str = (char *)s;
	idx = 0;
	while (idx < n)
	{
		str[idx] = c;
		idx++;
	}
	return (s);
}
// Preenche uma regiao de memoria com um valor especifico - valor de char, int,
//struct, etc..
// Retorna um pointer para a regiao de memoria.
