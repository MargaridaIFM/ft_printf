/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:49 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 12:35:23 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Converts a integer into a string using itoa and print it using the putstr,
 them free the memory allocated by itoa.
Return the Count the length of the string converted. */
int	ft_putnbr(int nbr)
{
	int		len;
	char	*str;

	str = ft_itoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
