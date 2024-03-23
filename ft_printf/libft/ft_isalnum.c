#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// Verifica se os caracteres sao alfanumericos;
// Retora 1 ou 0 dependendo se a condição esta correcta.
