/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:52 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 12:39:38 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_converstion_ptr(unsigned long long ptr);
int	ft_pointer_len(unsigned long long ptr);

/* if the pointer is 0 it will print “(nil)” and return the length 5. 
If is not it will print the number of the address(hexadecimal number). 
To do that first will print 0x and than the hexadecimal conversion 
(len + leng hexadecimal).
Return the length of str; */
int	ft_putpointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	len = ft_putstr("0x") + ft_converstion_ptr(ptr);
	return (len);
}

/* 
Print digit by digit in hexadecimal base system. 
To do this, it recursively calls the function itself.
Return the length/number of digits by calling the ft_pointer_len
 */
int	ft_converstion_ptr(unsigned long long ptr)
{
	if (ptr <= 9)
		ft_putchar(ptr + '0');
	else if (ptr > 9 && ptr <= 15)
		ft_putchar(ptr - 10 + 'a');
	else if (ptr > 15)
	{
		ft_converstion_ptr(ptr / 16);
		ft_converstion_ptr(ptr % 16);
	}
	return (ft_pointer_len(ptr));
}

/* Divide the number by 16 until the rest is 0 to know how many digits are.
Return the number of digits. */
int	ft_pointer_len(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}
