#include "./ft_printf.h"

void ft_conversion_hexa (unsigned int nr, const char format);
int ft_len_hexa (unsigned int nbr);

int ft_puthexadecimal (unsigned int nbr, const char format)
{
    if(nbr == 0)
        return (ft_putchar(0));
    else
        ft_conversion_hexa(nbr, format);
    return(ft_len_hexa(nbr));
}

void ft_conversion_hexa (unsigned int nbr, const char format)
{
    if(nbr <= 9)
    {
        ft_putchar(nbr + '0');

    }
    else if (nbr > 9 && nbr <=15)
    {
        if(format == 'x')
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

int ft_len_hexa (unsigned int nbr)
{
    int len;

    len = 0;
    while(nbr != 0)
    {
        nbr = nbr / 16;
        len++;
    }
    return(len);
}