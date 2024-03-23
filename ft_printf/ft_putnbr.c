#include "./ft_printf.h"

int	ft_putnbr(int nbr)
{
	int len;
    char *str;

    str = ft_itoa(nbr);
    len = ft_putstr(str);
    free(str);
    return(len);
}