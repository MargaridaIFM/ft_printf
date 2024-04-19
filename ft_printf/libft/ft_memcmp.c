/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:42 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:31:24 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare memory blocks byte by byte
// Does not necessarily reflect the lexicographic relationship
if it is a string */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;
	char	*dest;
	char	*src;

	idx = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (idx < n)
	{
		if (dest[idx] != src[idx])
			return ((unsigned char)dest[idx] - (unsigned char)src[idx]);
		idx++;
	}
	return (0);
}
/* 
int main()
{
	
	const char str_memcmp1[10]= "concatenar";
	const char str_memcmp2[10]= "constante";
	
	printf("Mine: %d\n", ft_memcmp(str_memcmp1, str_memcmp2, 10));
	printf("Original: %d\n", memcmp(str_memcmp1, str_memcmp2, 10));
} */