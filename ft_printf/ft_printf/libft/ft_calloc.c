#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// Aloca dinamicamente memoria para n elementos 
//todos inicializado em zero.
// Retorna um ponteiro para a area de memoria alocada 
//ou NULL se a alocação falhar. 
//ATENÇÃO: CONSIDERA QUE PODE ALOCAR COM 0 SIZE.
