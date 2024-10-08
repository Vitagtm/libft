#include "libft.h"
char *ft_strdup(const char *s1)
{
    unsigned char *cpy;
    cpy = malloc((ft_strlen(s1) + 1) * sizeof(cpy));

    if (!cpy)
        return(0);

        while(s1[i])
    {
        *cpy++ = *s1++;
    }
    *cpy = '\0';
    return(cpy);
}
