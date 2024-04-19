/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:28 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:35:10 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Fill a memory region with a 0 in n bytes.
Returns a pointer to the memory region.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <string.h>
int main()
{
	char teste[5] = "Hello";
	char teste2[5] = "Hello";
	size_t len = 5;
	printf("my: %s\n",teste);
	ft_bzero(teste, len);
	printf("my: %s\n",teste);
	memset(teste2, 0, len);
	printf("my: %s\n",teste2);
} */