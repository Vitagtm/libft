int ft_countint(int num)
{
    int total;
    total = 0;
    if(num == 0)
        total ++;
    if(num < 0)
    {
        total++;
        num *= -1;
    }
    while(num > 0)
    {
        num /= 10;
        total++;
    }
    return (total);
}
char *ft_itoa(int n)
{   size_t i;
    char *num;
    int len;
    len = ft_countint(n) - 1;
    num = calloc(ft_countint(n) + 1, sizeof(char));
    i = 0;
    if(!num)
        return (NULL);

    if(n == 0)
        num[i] = '0';
    if(n < 0)
    {
        num[i++] = '-';
        n *= -1;
    }
    while(n > 0)
    {
        num[len--] = (n%10) + '0';
        n /= 10;
        }
    return(num);
}
