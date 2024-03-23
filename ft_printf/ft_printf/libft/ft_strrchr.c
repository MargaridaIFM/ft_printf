#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int idx;

    idx = ft_strlen(s);

    while(idx >= 0)
    {
        if(s[idx] == (unsigned char)c)
            return((char *)s +idx );
        idx--;
    }
    if(c == '\0')
        return((char *)s + idx);
    return(NULL);
}
// Encontra a ultima ocorrencia do caracter especificado numa string
// Retorna um pointer para essa ocorrencia ou NULL se não encontrar.