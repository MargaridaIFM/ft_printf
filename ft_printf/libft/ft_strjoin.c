/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:37 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:07:50 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Concatenates two strings (prefix and suffix) 
and allocates space for the new string
Returns the new string or NULL if allocation fails */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total_len;
	size_t	len_s1;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, total_len);
	return (str);
}
/* int main()
{
    char *prefix = "I am going ";
    char *sufix = "to the gym";
    char *result_join = ft_strjoin(prefix, sufix);
    printf("Mine: %s\n", result_join);
    free(result_join);
}
 */