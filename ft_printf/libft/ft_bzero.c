#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// Limpa a memoria colocando tudo a 0;
// Retunr VOID
