/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:51 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/18 13:04:16 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the last occurrence of the specified character in a string
Returns a pointer to this occurrence or NULL if not found. */
/* char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == (char)c)
			return ((char *)s + idx);
		idx--;
	}
	if (c == '\0')
		return ((char *)s + idx);
	return (NULL);
} */

/* int main()
{
	printf("Mine: %s\n", ft_strrchr("0teste\n", 48));
	printf("Original: %s\n", strrchr("0teste\n", 48));
} */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		else
			i--;
	}
	return (0);
}
/* int main (void)
{
    int count;
    int failed;
    char string[511];
    char *result;
    char *_result;

    ft_bzero(string, 511);
    for (size_t idx = 0; idx < 255; ++idx)
    {
        string[idx] = 256 - idx - 1;
        string[idx + 256] = 256 - idx - 1;
    }

    count = 0;
    printf("ft_strchr.c extra ");
    for (int c = 0; c < 256; ++c)
    {
        result = ft_strrchr(string, c);
        _result = strrchr(string, c);
        failed = result != _result;
        count += failed;
        if (failed)
        {
            printf("X");
            printf("(%d, %p, %p)", c, result, _result);
        }
        else
            printf(".");
    }

    printf("\nFound %d errors.\n", count);
    return (count);
} */