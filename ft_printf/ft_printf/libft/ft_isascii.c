#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// Verifica que se o numero pertente a tabela de ascii;
// Retorna 1 se for verdeira a condicao ou 0 se não for;