/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:40 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:21:44 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compares the first n characters of a string
Returns a positive or negative number if they are not equal
Or 0 if they are equal. */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while ((s1[idx] || s2[idx]) && idx < n)
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}
/* int main(void)
{	
	char s1_strncmp[] = "test\200";
	char s2_strncmp[] = "test\0";
	printf("my: %d\n", ft_strncmp(s1_strncmp, s2_strncmp, 6));
	printf("original: %d\n\n", strncmp(s1_strncmp, s2_strncmp, 6));

} */
