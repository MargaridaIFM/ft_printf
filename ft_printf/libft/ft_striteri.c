/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:32 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:31:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates through a string, enabling character and index manipulation.
Return Value None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, s + idx);
		idx++;
	}
}
/* void function_f_striteri(unsigned int nr,char *str)
    {
        if(str)
            *str = ft_toupper(*str);
    }

int main()
{
    char str_striteri[10] = "ABCDefgh";

    ft_striteri(str_striteri, function_f_striteri);
    printf("New: %s", str_striteri);
    return 0;
} */