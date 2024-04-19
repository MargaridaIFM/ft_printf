/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:40 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 12:39:10 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_conversion_hexa(unsigned int nr, const char format);
int		ft_len_hexa(unsigned int nbr);

/* if the number is 0 it will print 0 and return the length 1. 
If is not it will print the number.
If the number is different from 0 it will be converted into a string 
and print that with the ft_converstion_hexa.
Return the length of str; */
int	ft_puthexadecimal(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (ft_putchar('0'));
	else
		ft_conversion_hexa(nbr, format);
	return (ft_len_hexa(nbr));
}

/* Print digit by digit in hexadecimal base system. 
To do this, it recursively calls the function itself.
If the format was x, the corresponding letters will be printed in lowercase, 
if it is X in uppercase.
None value return. */
void	ft_conversion_hexa(unsigned int nbr, const char format)
{
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	else if (nbr > 9 && nbr <= 15)
	{
		if (format == 'x')
			ft_putchar(nbr - 10 + 'a');
		if (format == 'X')
			ft_putchar(nbr - 10 + 'A');
	}
	else if (nbr > 15)
	{
		ft_conversion_hexa(nbr / 16, format);
		ft_conversion_hexa(nbr % 16, format);
	}
}

/* Divide the number by 16 until the rest is 0 to know how many digits are.
Return the number of digits. */
int	ft_len_hexa(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}
