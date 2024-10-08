#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;
    i = 0;
    j = 0;
    if(!(calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char))))
        return (NULL);
    while(s1[i])
        str[i++] = s1[j++];
    j = 0;
    while(s2[j])
        str[i++] = s2[j++];
    return(str);

}