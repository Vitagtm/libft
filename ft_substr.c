#include "libft.h"
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char * str;
    size_t i;
    i = 0;
    if (!(str = calloc(len + 1, sizeof(char))))
        return(0);
    if(start > ft_strlen(s))
        return ("");
    if(!s)
        return(0);
    while(i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return(str);
}