/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:26 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:19:43 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character is a digit
Returns 1 if the condition is true or 0 if it is not; */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* #include <ctype.h>
int main()
{
	char c = '1';
	char a = 'a';
	printf("Original: %d %d\n", isdigit(c), isdigit(a));
	printf("Mine: %d %d\n",ft_isdigit(c), ft_isdigit(a));
} */