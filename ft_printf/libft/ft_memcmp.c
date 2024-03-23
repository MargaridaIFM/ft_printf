#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;
	char	*dest;
	char	*src;

	idx = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (idx < n)
	{
		if (dest[idx] != src[idx])
			return ((unsigned char)dest[idx] - (unsigned char)src[idx]);
		idx++;
	}
	return (0);
}
// Compara blocos de memoria byte a byte
// Nao reflecte necessariamente a relacao lexicografica se for uma string
