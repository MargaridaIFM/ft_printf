/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:48 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:36:07 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Search for the first occurrence of a substring in a string
Returns a pointer to this occurrence
Or the original string if the substring does not exist. */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	j;

	idx = 0;
	if (*little == '\0')
		return ((char *)big);
	while (idx < len && big[idx])
	{
		j = 0;
		while (big[idx + j] == little[j] && idx + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + idx);
			j++;
		}
		idx++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char big_strnstr[] = "heoloolpo";
	const char little_strnstr[] = "ool";
	printf("Mine: %s\n", ft_strnstr(big_strnstr, little_strnstr,9));
	const char str_meu[] = "Lifebe is beautifulpo";
	const char to_find[] = "beautiful";
	const char to_find1[] = "";
	printf("Mine: %s \n", ft_strnstr(str_meu, to_find, 20));
	printf("Mine %s \n", ft_strnstr(str_meu, to_find1, 20));
	return (0);
} */