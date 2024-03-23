#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	idx;
	size_t	idx_n;

	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		idx_n = n;
		while (idx_n > 0)
		{
			idx_n--;
			((unsigned char *)dest)[idx_n] = ((unsigned char *)src)[idx_n];
		}
	}
	else
	{
		idx = 0;
		while (idx < n)
		{
			((unsigned char *)dest)[idx] = ((unsigned char *)src)[idx];
			idx++;
		}
	}
	return (dest);
}
// Copia os dados de uma area de memoria para outra area de memoria,
// Mais segura que a memcpy porque lida com memorias sobrepostas
//("modifica o que esta na zona de destino da memoria mas n altera o que estaria la alocado ao lado")
// Retorna um pointer para a nova area de memoria com os dados copiados.
// POr nao se saber que tipo de dados serao copiados considera-se do tipo char por ter o valor de um byte.