/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:04 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/19 12:33:45 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int								ft_conversion(va_list args, const char format);

/* The function receive a string and check if inside is a % character.
If% is encountered the function  ft_printf_arg it will called to continue.
it will check which caracter is	next((format + 1) - c, p, d, ect).
If there is no % the function will print the string and add one to the len.
Return the len of the string. */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	size_t	idx;

	if (!format)
		return (-1);
	len = 0;
	idx = 0;
	va_start(args, format);
	while (format[idx])
	{
		if (format[idx] == '%')
		{
			len += ft_conversion(args, format[idx + 1]);
			idx++;
		}
		else
			len += ft_putchar(format[idx]);
		idx++;
	}
	va_end(args);
	return (len);
}

/* This function check which character is after the
% and call the respectively the correct function to deal 
with the correspondent data type. The string it will be printed with the data.
Returns the number of characters printed */
int	ft_conversion(va_list args, const char data_type)
{
	if (data_type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (data_type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (data_type == 'p')
		return (ft_putpointer(va_arg(args, unsigned long long)));
	else if (data_type == 'd' || data_type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (data_type == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (data_type == 'x' || data_type == 'X')
		return (ft_puthexadecimal(va_arg(args, unsigned long int), data_type));
	else if (data_type == '%')
		return (ft_putchar('%'));
	return (0);
}

/* int	main(void)
{
	ft_printf("%d \n", ft_printf("ola%%%"));
	//printf("%d \n", printf("ola%%%"));
 
	int teste = printf("hello world\n");
	printf("imprimiu: %d\n", teste);
	int teste2 = ft_printf("hello world\n");
	ft_printf("imprimiu: %d\n", teste2);
	printf("\n");
	int x = 42;
	int x2 = 34;
	void *ptrx2 = &x2;
	void *ptr = &x;

	
	ft_printf("HELLO\n");
	ft_printf("%d \n", ft_printf(""));
	ft_printf("%d \n", ft_printf(NULL));
	ft_printf("CHARACTERS: %c %c\n", 'a', 'b');
	ft_printf("STRINGS: %s %s\n", "Good", "bye");
	ft_printf("DECIMAL: %i %d\n", 42, 123);
	ft_printf ("DECIMALS: %d %d\n", 1977, 650000L);
	ft_printf("POINTER NULO: %p \n", NULL );
	ft_printf("POINTER DE x é: %p\n", ptr);
	ft_printf("POINTER 0: %p %p \n", (void *)0, (void *)0);
	ft_printf ("DECIMAL e HEXADECIMAL: %d %x %X \n", 255, 255, 255);
	ft_printf ("HEXADECIMAL 0: %x %X\n", 0, 0);
	ft_printf ("Unsigned int: %u %u\n",  2147483647, UINT_MAX);
	ft_printf ("Unsigned int: %u \n", UINT_MAX);
	ft_printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A',
		"Mix", ptrx2, 34, 34, 255, 255, UINT_MAX);


	ft_printf("\n");
	
	printf("Hello\n");
	printf("%d \n", printf(""));
	printf("%d \n", printf(NULL));
	printf("Characters: %c %c\n", 'a', 'b');
	printf("Strings: %s %s\n", "Good", "bye");
	printf("Decimal: %d %d\n", 42, 123);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf("Pointer nulo: %p \n", NULL );
	printf("Pointer de x é: %p\n", ptr);
	printf("Pointer 0: %p %p \n", (void *)0, (void *)0);
	printf ("Decimal e hexadecimal: %d %x %X \n", 255, 255, 255);
	printf (" Hexadecimal 0: %x %X\n", 0, 0);
	printf ("Unsigned int: %u %u\n", 2147483647, UINT_MAX);
	printf ("Unsigned int: %u \n", UINT_MAX);
	printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A', "Mix",
		ptrx2, 34, 34, 255, 255, UINT_MAX);
	return (0);
} */