/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:53:46 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:12:13 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* It only counts the number of digits in the integer;
includes the signal in the count; */
static int	ft_nbr_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
/* After removing the sign,
it transforms the remainder into a string; */

static void	ft_rest_nbr(int len, int idx, int n, char *str)
{
	while (len > idx)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}
// Convert integer to ASCII string.

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		idx;

	idx = 0;
	len = ft_nbr_size(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		idx = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		idx = 1;
	}
	str[len] = '\0';
	ft_rest_nbr(len, idx, n, str);
	return (str);
}
/* int main()
{
    int n_itoa = 1235;
    int n_itoa1 = -21455;
    int n_itoa2 = -2147483648;
    int n_itoa3 = 2147483647;
    char *result_itoa = ft_itoa(n_itoa);
    char *result_itoa1 = ft_itoa(n_itoa1);
    char *result_itoa2 = ft_itoa(n_itoa2);
    char *result_itoa3 = ft_itoa(n_itoa3);
    // printf("%d \n", ft_get_size(n_itoa));
    // printf("%d \n", ft_get_size(n_itoa1));
    // printf("%d \n", ft_get_size(n_itoa2));
    // printf("%d \n", ft_get_size(n_itoa3));
    printf("%s \n", result_itoa);
    printf("%s \n", result_itoa1);
    printf("%s \n", result_itoa2);
    printf("%s \n", result_itoa3);
    free(result_itoa);
    free(result_itoa1);
    free(result_itoa2);
    free(result_itoa3);
}
 */