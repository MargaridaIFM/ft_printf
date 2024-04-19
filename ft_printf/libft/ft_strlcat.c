/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:45 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 20:07:04 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Concatenates an n number of characters from the source string
to the destination;
Returns the total length of the string (dest + src); */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && size > i + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
/* int main()
{
	char dst_strlcat[20] = "hello";
	char *src_strlcat = "world1";
	printf("antes: %s\n", dst_strlcat);
	printf("numero: %ld\n", ft_strlcat(dst_strlcat, src_strlcat, 3));
	ft_strlcat(dst_strlcat, src_strlcat, 3);
	printf("depois: %s\n\n", dst_strlcat);
} */