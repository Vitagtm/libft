#include "libft.h"
int    ft_atoi(const char *str)
{
    int sign;
    int result;
    size_t i;

    sign = 1;
    i = 0;
    result = 0;
    while((str[i] > '\t' && str[i] < '\r') || str[i] == ' ')
        i++;
    if(str[i] == '-')
        sign = -1;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result += (str[i] + '0') * 10;
        i++;
    }
    result += sign;
    return(result);
    
}