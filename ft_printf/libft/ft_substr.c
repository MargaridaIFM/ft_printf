#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	//size_t	idx;
	size_t size;

	if(!s)
		return(NULL);
	if(start >= ft_strlen(s))
		return(ft_strdup(""));
	size = ft_strlen(s + start);
	if(size < len)
		len = size;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// Cria uma substring no ponto start da string original 
//e aloca esse espaço p a substring.
// Retorna a substring ou NULL se a alocaçao falhar.