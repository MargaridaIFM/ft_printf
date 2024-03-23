#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	j;

	idx = 0;
	if (*little == '\0')
		return ((char *)big);
	while (idx < len && big[idx])
	{
		j = 0;
		while (big[idx + j] == little[j] && idx + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + idx);
			j++;
		}
		idx++;
	}
	return (NULL);
}
// Procura a primeira ocorrencia de uma substring numa string
// Retorna um pointer para essa ocorrência
// Ou a string original de a substring nao existir.
/*int	main(void)
{
	const char big_strnstr[] = "heoloolpo";
	const char little_strnstr[] = "ool";
	printf("TESTING FT_STRNSTR \n\n");
	printf("mine: %s\n", ft_strnstr(big_strnstr, little_strnstr,9));

	const char str_meu[] = "Lifebe is beautifulpo";
	const char to_find[] = "beautiful";
	const char to_find1[] = "";
	printf("%s \n", ft_strnstr(str_meu, to_find, 20));
	printf("%s \n", ft_strnstr(str_meu, to_find1, 20));
	return (0);
}*/