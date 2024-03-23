#include "./ft_printf.h"

char *ft_utoa(unsigned int nrb);
int	ft_unsigned_len(unsigned int nrb);

int	ft_putunsigned(unsigned int nrb)
{
	int len;
	char *str;

	len = 0;
	if (len == 0)
		len = ft_putchar('0');
	else
	{
		str = ft_utoa(nrb);
		len += ft_putstr(str);
        free(str);
    }
		return (len);
}
char *ft_utoa(unsigned int nrb)
{
    char *str_nbr;
    int len;

    len = ft_unsigned_len(nrb);
    str_nbr = malloc((len+1) + sizeof(char *));
    if(!str_nbr)
        return (NULL);
    while (nrb != 0)
    {
        str_nbr[len] = nrb % 10 + '0';
        nrb /= 10;
        len--; 
    }
    str_nbr[len] = '\0';
    return(str_nbr);
}

int ft_unsigned_len(unsigned int nrb)
{
		int len;

		len = 0;
		while (nrb != 0)
		{
			len++;
			nrb /= 10;
		}
		return (len);
}