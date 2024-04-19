/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:50 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:42:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies data from one memory area to another memory area,
Deals with overlapping memories(copy end to the beginning or vice versa)
"modifies what is in the memory destination zone
but it doesn't change what would be allocated next to it")
Returns a pointer to the new memory area with the copied data.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	idx;
	size_t	idx_n;

	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		idx_n = n;
		while (idx_n > 0)
		{
			idx_n--;
			((unsigned char *)dest)[idx_n] = ((unsigned char *)src)[idx_n];
		}
	}
	else
	{
		idx = 0;
		while (idx < n)
		{
			((unsigned char *)dest)[idx] = ((unsigned char *)src)[idx];
			idx++;
		}
	}
	return (dest);
}
/* int main()
{
	char teste[10] = "Hello";
	char teste2[10] = "ByeBye";
	char teste3[10] = "Hello";
	char teste4[10] = "ByeBye";
	size_t len = 0;
	ft_memmove(teste,teste2, len);
	printf("my: %s\n", teste);
	memmove(teste3,teste4, len);
	printf("original: %s\n", teste3);
} */