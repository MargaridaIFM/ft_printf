#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total_len;
	size_t	len_s1;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, total_len);
	return (str);
}
// concatena duas strings (prefix e sufix) e aloca espaço para a nova string
// Retorna a nova string ou NULL se a alocação falhar