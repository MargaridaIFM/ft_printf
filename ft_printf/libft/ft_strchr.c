#include "libft.h"


char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char*)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main (void)
{
	//const char s_strchr[] = "hello";
	printf("TESTING FT_STRCHR \n\n");
	printf("my: %s\n", ft_strchr("teste", 'e'));
	printf("original: %s\n", strchr( "teste",'e'));
}*/
// Encontra a primeira ocorrencia (indice) do caracter especificado numa string
// Retorna um pointer para essa ocorrencia ou NULL se não encontrar.