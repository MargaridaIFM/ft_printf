/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:36 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:28:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Searches for the occurrence of a specific byte in an n area of ​​memory.
Returns a pointer to the first occurrence found
or NULL if not found. */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;
	char	*str;

	str = (char *)s;
	idx = 0;
	while (idx < n)
	{
		if ((unsigned char)str[idx] == (unsigned char)c)
			return ((char *)s + idx);
		idx++;
	}
	return (NULL);
}

/* int main()
{
	size_t n = 2;
	int c = 'c';
	const char str_memchr[10]= "concatenar";
	
	printf("Mine: %p\n", ft_memchr(str_memchr, c, n));
	printf("Original: %p\n", memchr(str_memchr, c, n));
} */