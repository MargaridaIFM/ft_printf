#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1)
		return (NULL);
	if (*set == '\0')
		return (ft_strdup(s1));
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	while (s1[end] && (ft_strchr(set, s1[end])))
		end--;
	trimmed = ft_substr(s1, start , end - start + 1);
	return (trimmed);
}
/*int main(void)
{
	char *strtrim;
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    if (!(strtrim = ft_strtrim(s1, " ")))
        printf("NULL");
    else
        printf("%s \n", strtrim);
    if (strtrim == s1)
	{
        printf("\nA new string was not returned");
	}
	const char *s1_strtrim = "  \t \t \n   \n\n\n\t";;
	//const char *set_strtrim = " ";
	char *result_strtrim = ft_strtrim(s1_strtrim, " \n\t");
	printf("TESTING FT_STRSTRIM \n\n");
	printf("%s \n", result_strtrim);
	free(result_strtrim);
}*/
// Copia uma string removendo uma 
//substring/separador do inicio e do fim;
// Aloca a memoria para essa string;
// Retorna um ponteira para a memoria alocada 
//ou NULL se a alocação falhar.