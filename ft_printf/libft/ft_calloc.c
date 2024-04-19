/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:47 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:52:57 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Dynamically allocate memory to n elements
all initialized to zero.
Returns a pointer to the allocated memory area
or NULL if the allocation fails.
ATTENTION: ASSUME THAT YOU CAN ALLOCATE WITH 0 SIZE.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* int main()
{
	size_t elements = 5;
	size_t size_char = sizeof(char);
	size_t size_int = sizeof (int);
	int *intArray;
	char *charArray;
	
	intArray = (int *)ft_calloc(elements, size_int);
	if (intArray != NULL)
	{
		printf("Memory allocation successful\n");
		for (size_t i = 0; i < elements; i++)
		{
			printf("%d ", intArray[i]);
		}
		printf("String: %ls\n", intArray);
		printf("\n");
		free(intArray);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	charArray = (char *)ft_calloc(elements, size_char);
	if(charArray != NULL)
	{
		printf("Memory allocation successful\n");
		printf("string: %s ", charArray);
		free(charArray);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
} */