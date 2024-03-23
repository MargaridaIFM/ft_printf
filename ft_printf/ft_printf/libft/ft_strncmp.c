/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:31:01 by mfrancis          #+#    #+#             */
/*   Updated: 2024/03/06 11:35:30 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*int main(void)
{char s1_strncmp[] = "test\200";
	char s2_strncmp[] = "test\0";
	printf("TESTING FT_STRNCMP\n\n");
	printf("my: %d\n", ft_strncmp(s1_strncmp, s2_strncmp, 6));
	printf("original: %d\n\n", strncmp(s1_strncmp, s2_strncmp, 6));

}*/
// Compara os primeiros n carateres de uma string
// Retorna um numero positivo ou negativo se nao forem iguais
// Ou 0 se forem iguas.