/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:16 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:19:56 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character belongs ascii table;
Returns 1 if the condition is true or 0 if it is not;
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* #include <ctype.h>
int main()
{
	char c = '1';
	printf("my: %d\n", ft_isascii(c));
	printf("original: %d\n\n", isascii(c));
} */