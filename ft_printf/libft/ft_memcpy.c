/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:46 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:39:55 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copy data from one memory area to another memory area,
Returns a pointer to the new memory area with the copied data.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	idx;

	idx = 0;
	if (!dest && !src)
		return (dest);
	while (idx < n)
	{
		((char *)dest)[idx] = ((char *)src)[idx];
		idx++;
	}
	return (dest);
}
/* int main()
{
	char teste[10] = "Hello";
	char teste2[10] = "ByeBye";
	char teste3[10] = "Hello";
	char teste4[10] = "ByeBye";
	size_t len = 10;
	ft_memcpy(teste,teste2, len);
	printf("my: %s\n", teste);
	memcpy(teste3,teste4, len);
	printf("original: %s\n", teste3);
}  */