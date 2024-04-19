/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:02 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 18:20:13 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character is alphanumeric;
Returns 1 if the condition is true or 0 if it is not;
 */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/* #include <ctype.h>
int main()
{
	char c = '1';
	printf("my: %d\n", ft_isalnum(c));
	printf("original: %d\n\n", isalnum(c));
} */