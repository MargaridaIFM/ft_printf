/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:56 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/18 19:56:01 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Prints the string or “(null)”
Returns the length of the string or 6 ( nr of characters of (null); */
int	ft_putstr(char *s)
{
	int	idx;

	idx = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[idx])
	{
		write(1, &s[idx], 1);
		idx++;
	}
	return (idx);
}
