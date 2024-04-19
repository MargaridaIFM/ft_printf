/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:37 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:38:49 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Clears the string of spaces and one positive or negative sign
Returns an integer. */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	final_nr;

	neg = 1;
	final_nr = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9'))
	{
		final_nr = (final_nr * 10) + (nptr[i] - '0');
		i++;
	}
	return (final_nr * neg);
}

/* int main()
{
	char nr_atoi[] = "	-1548689 hs";
	char nr_atoi1[] = " +1548hs56";
	printf("meu: %d\n", ft_atoi(nr_atoi));
	printf("original: %d\n\n", atoi(nr_atoi));
	printf("meu: %d\n", ft_atoi(nr_atoi1));
	printf("original: %d\n\n", atoi(nr_atoi1));
} */