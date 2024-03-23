#include "./ft_printf.h"

int ft_putstr(char *s)
{
    int idx;
    idx = 0;
    if(s == NULL)
    {
        write(1, "(null)",6);
        return(6);
    }
    while(s[idx])
    {
        write(1, &s[idx], 1);
        idx++;
    }
    return(idx);
} 