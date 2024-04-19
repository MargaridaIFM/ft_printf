/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:35 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:20:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character is printable;
Returns 1 if the condition is true or 0 if it is not;
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* #include <ctype.h>
int main()
{
	char c = ' ';
	printf("my: %d\n", ft_isprint(c));
	printf("original: %d\n\n", isprint(c));
} */