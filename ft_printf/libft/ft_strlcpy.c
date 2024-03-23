/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:06:50 by mfrancis          #+#    #+#             */
/*   Updated: 2024/03/06 10:28:29 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	idx;

	idx = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size != 0)
	{
		while (idx < size - 1 && src[idx])
		{
			dst[idx] = src[idx];
			idx++;
		}
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
// Copia um n numero de caracteres da string de origem para a destino;
// Retorna o tamanho da src;