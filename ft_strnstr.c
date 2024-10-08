#include "libft.h"
char *ft_strnst(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    if(!needle)
        return (&haystack);
    while(haystack[i] && i < len)
       {
        while(haystack[i + j] == needle[j] && haystack[i+j] && i + j < len)
           {
            if(needle[j] == '\0')
                return(&haystack[i])
            j++;
            }
        j == 0;
        i++;
        }
        return (0);

}