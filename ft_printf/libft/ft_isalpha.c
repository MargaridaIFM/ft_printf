/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:08 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:17:45 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character belongs to the alphabet;
Returns 1 if the condition is true or 0 if it is not;*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* #include <ctype.h>
int main()
{
	char c = '\0';
	char a = 'a';
	printf("Original: %d %d\n", isalpha(c), isalpha(a));
	printf("Mine: %d %d\n",ft_isalpha(c), ft_isalpha(a));
} */
