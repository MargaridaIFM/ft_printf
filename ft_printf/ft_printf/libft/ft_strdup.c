
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		size_len;
	int		i;

	size_len = ft_strlen(s) + 1;
	i = 0;
	dest = malloc((size_len) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// Duplica uma string existente alocando
// memoria para a mesma e depois copia o conteudo da string
// Retorna o ponteiro para a nova string.