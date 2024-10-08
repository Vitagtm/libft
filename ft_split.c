#include "libft.h"

int ft_wordcount(char const *s, char c)
{
    size_t i;
    int wc;
    wc = 0;
    i = 0;
    
    while(s[i])
    {
        if(s[i] == c)
            wc++;
        i++;
    }
    return(wc)
        
}
char *ft_word(const char *s, int start, int end)
{
    size_t i;
    char *word;
    i = 0;
    word = malloc((end - start + 1) * sizeof(char));
    if(!word)
        return (NULL);
    while(start < end)
    {
        word[i++] = s[start++];
    }
    word[i] = 0;
    return(word);
    
}
char **ft_split(char const *s, char c)
{
    int words;
    size_t i;
    char ** totalword;
    int start;
    int end;
    words = ft_wordcount(s, c);
    i = 0;
    start = 0;
    end = 0
    totalword = calloc(ft_wordcount(s, c), sizeof(char));
    if(!totalword)
        return NULL;
    if(!s || !c)
        return NULL;
    while(i < words)
    {
        while(s[end] != c)
            end ++;
        totalword[i] = ft_word(s, start, end);
        start = end;
        i++;
    }
    return(totalword);
}