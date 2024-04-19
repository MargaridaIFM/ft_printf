/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:06 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 11:23:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Output integer to the given file descriptor.
Return Value None.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/* int main()
{
    ft_putnbr_fd(-56789, 1);
    printf("\n");
    ft_putnbr_fd(1234, 1);
    printf("\n");
    ft_putnbr_fd(0, 1);
    printf("\n");
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
    ft_putnbr_fd(2147483647, 1);
    printf("\n");
} */
