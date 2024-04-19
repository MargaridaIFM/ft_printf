/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:55 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 15:56:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies a string by removing one
substring/start and end separator;
Allocates memory for this string;
Returns a pointer to the allocated memory
or NULL if the allocation fails. */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1)
		return (NULL);
	if (*set == '\0')
		return (ft_strdup(s1));
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	while (s1[end] && (ft_strchr(set, s1[end])))
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
/* int main(void)
{
    const char *s1_strtrim = "/Eu/Gosto/de/Calor/";
    const char *set_strtrim = "/E";
    char *result_strtrim = ft_strtrim(s1_strtrim, set_strtrim);
    printf("TESTING FT_STRSTRIM \n\n");
    printf("%s \n", result_strtrim);
    free(result_strtrim);
    printf("\n");
}  */