/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:57 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:22:51 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Output a character to the given file descriptor.
Return Value None.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* int main()
{
    ft_putchar_fd('H', 1);
    ft_putchar_fd('i',1);
    ft_putchar_fd('\n',1);
}
 */