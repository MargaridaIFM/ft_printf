#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int idx;
    idx = 0;
    while(s[idx])
    {
        write(fd, &s[idx], 1);
        idx++;
    }
}