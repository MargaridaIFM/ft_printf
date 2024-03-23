#include "libft.h"

// Vai serparar as palavras
static void	ft_split_words(char **array, char const *s, char c)
{
	char	**word;
	size_t	word_len;
	size_t	i;
    
	i = 0;
	word_len = 0;
	word = array;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len++;
			if (s[i + 1] == '\0' || s[i + 1] == c)
			{
				*word = ft_substr(s, i - word_len + 1, word_len);
				word++;
				word_len = 0;
			}
		}
		i++;
	}
	*word = NULL;
}
// conta o numero de strings da string delimitadas pelo seperador
static int	ft_count_words(char const *s, char sep)
{
	int	counter;
	int	idx;

	counter = 0;
	idx = 0;
	if (s[idx] != sep)
		counter++;
	while (s[idx])
	{
		if (s[idx] == sep)
		{
			while (s[idx] == sep)
				idx++;
			if (s[idx] != '\0')
				counter++;
			if (s[idx] == '\0')
				return (counter);
		}
		idx++;
	}
	return (counter);
}
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	array = (char **) malloc((size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_split_words(array, s, c);
	return (array);
}
