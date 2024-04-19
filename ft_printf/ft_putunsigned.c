/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:43:07 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/19 12:32:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

char	*ft_utoi(unsigned int nrb);
int		ft_unsigned_len(unsigned int nrb);

/* If the number is 0, print "0" and return 1
If it not convert the integer to a string with utoa function. 
Then print that string and at the end free the memory allocated.
Return the length of the strinh  */
int	ft_putunsigned(unsigned int nrb)
{
	int		len;
	char	*str;

	len = 0;
	if (nrb == 0)
		len += ft_putchar('0');
	else
	{
		str = ft_utoi(nrb);
		len += ft_putstr(str);
		free(str);
	}
	return (len);
}

/* Converts a integer into a string and allocate the necessary memory 
with the extra space for the null character.
Returns the string. */
char	*ft_utoi(unsigned int nrb)
{
	char	*str_nbr;
	int		len;

	len = ft_unsigned_len(nrb);
	str_nbr = malloc((len + 1) * sizeof(char *));
	if (!str_nbr)
		return (NULL);
	str_nbr[len] = '\0';
	while (nrb != 0)
	{
		str_nbr[len - 1] = nrb % 10 + '0';
		nrb /= 10;
		len--;
	}
	return (str_nbr);
}

/* Divide the number by 16 until the rest is 0 to know how many digits are.
Return the number of digits. */
int	ft_unsigned_len(unsigned int nrb)
{
	int	len;

	len = 0;
	while (nrb != 0)
	{
		len++;
		nrb /= 10;
	}
	return (len);
}
