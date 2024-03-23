#include "libft.h"

// Apenas conta o numero de digitos do integer;
// inclui na contagem o sinal;
static int	ft_nbr_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
// Apos retirar o sinal transfora o restante em string;
static void ft_rest_nbr(int len, int idx, int n, char *str)
{
    while (len > idx)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		idx;

	idx = 0;
	len = ft_nbr_size(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
        str[0] = '-';
        str[1] = '2';
        n = 147483648;
        idx = 2; 
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		idx = 1;
	}	
    str[len] = '\0';
	ft_rest_nbr(len, idx, n, str);
	return (str);
}