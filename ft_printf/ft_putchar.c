/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:33 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 12:34:42 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Prints a single character
Returns the length, in this case is 1. */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
