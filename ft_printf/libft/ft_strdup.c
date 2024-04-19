/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:26 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:59:38 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Duplicates an existing string by allocating
memory for it and then copy the contents of the string
Returns the pointer to the new string. */
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

/* int main()
{
	char *dest = "Hello";
	char *src = "World";
	printf("dst string original: %s\n", dest);
	printf("src string original; %s\n", src);
	dest = ft_strdup(src);
	printf("dst string final: %s\n", dest);
	free(dest);
} */