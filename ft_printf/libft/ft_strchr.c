/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:21 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 17:30:39 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the first occurrence (index) of the specified character in a string
Returns a pointer to this occurrence or NULL if not found. */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* 
int main(void)
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
        result = ft_strchr(string, c);
        _result = strchr(string, c);
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