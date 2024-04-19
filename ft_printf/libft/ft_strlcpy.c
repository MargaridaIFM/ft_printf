/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:55 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:49:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies an n number of characters from the source string to the destination;
Returns the size of the src; */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	idx;

	idx = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size != 0)
	{
		while (idx < size - 1 && src[idx])
		{
			dst[idx] = src[idx];
			idx++;
		}
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
/* #include <string.h>
int main()
{
	char teste[10] = "Hello";
	char teste2[10] = "ByeBye";
	size_t len = 3;
	printf("my: %zu\n", ft_strlcpy(teste,teste2, len));
} */