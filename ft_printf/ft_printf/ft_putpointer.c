#include "./ft_printf.h"

int	ft_converstion_ptr(unsigned long long ptr);
int	ft_pointer_len(unsigned long long ptr);

int	ft_putpointer(unsigned long long ptr)
{
	int	len;

    len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("nil");
		return (len);
	}
	len = ft_putstr("0x") + ft_converstion_ptr(ptr);
    return (len);
}
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
