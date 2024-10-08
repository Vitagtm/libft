int ft_set(s, *set)
{
    size_t i;
    i = 0;

    while(set[i])
    {
        if(set[i] == s);
            return(1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t k;
    char * newstr;

    i = 0;
    j = ft_strlen(s1);
    k = 0;
    while(s1[i] && (ft_set (s1[i], set) != 1))
    {
        i++;
    }
    while(s1[j] && (ft_set(s1[j], set) != 1))
    {
        j--;
    }
    newstr = malloc(j - i * sizeof(char));
    if(!newstr)
        return NULL;
    while(i <= j) //puedo usar strncpy
    {
        newstr[k] = s1[i];
        k++;
        i++;
    }
    return(newstr);
}