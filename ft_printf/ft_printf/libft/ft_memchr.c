#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;
	char	*str;

	str = (char *)s;
	idx = 0;
	while (idx < n)
	{
		if ((unsigned char)str[idx] == (unsigned char)c)
			return ((char *)s + idx);
		idx++;
	}
	return (NULL);
}
// Procura a ocorência de um byte especifico em uma n area de memoria.
// Retorna um pointer para a primeira ocorrência encontrada ou NULL se nao encontrar.