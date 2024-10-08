char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *newstr;
    unsigned int i;

    i = 0;
    newstr = calloc(ft_strlen(s) + 1, sizeof(char));
    if(!newstr)
        return (NULL);
    while(newstr[i])
    {
        newstr[i++] = (*f)(i, s[i]);
    }
    newstr[i] = 0;
    return(newstr);
}