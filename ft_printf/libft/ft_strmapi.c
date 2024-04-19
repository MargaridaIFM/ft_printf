/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:56:09 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:15:59 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Create a new string by modifying the string with a specified function.
 Returns the string modified ou NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	idx;

	idx = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[idx])
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
/* char function_f_mapi(unsigned int i, char c)
    {
        (void)i;
        return(c + 1);
    }
int main()
{
    char *str_strmapi = "AbCd";
    char *result_strmapi = ft_strmapi(str_strmapi, function_f_mapi);
    printf("Origial: %s\n", str_strmapi);
    printf("New: %s\n", result_strmapi);
    free(result_strmapi);
}
 */