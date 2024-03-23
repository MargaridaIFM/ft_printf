#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	idx;

	idx = 0;
	if (!dest && !src)
		return (dest);
	while (idx < n)
	{
		((char *)dest)[idx] = ((char *)src)[idx];
		idx++;
	}
	return (dest);
}
// Copia os dados de uma area de memoria para outra area de memoria,
// Retorna um pointer para a nova area de memoria com os dados copiados.
// POr nao se saber que tipo de dados serao copiados considera-se do tipo char por ter o valor de um byte.
