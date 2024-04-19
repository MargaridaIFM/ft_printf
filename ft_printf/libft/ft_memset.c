/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:53 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:30:23 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Fill a memory region with a specific value given by the int c
in n bytes.
Returns a pointer to the memory region.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	idx;
	char	*str;

	str = (char *)s;
	idx = 0;
	while (idx < n)
	{
		str[idx] = c;
		idx++;
	}
	return (s);
}

/* int main()
{
	char teste[10];
	char teste2[10];
	size_t len = 10;
	ft_memset(teste, 'I', len);
	printf("my: %s\n", teste);
} */