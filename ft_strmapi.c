char    ft_strmapi(char consts, char (*f)(unsigned int, char))
{
    size_t    len;
    size_t    i;
    char    str;

    i = 0;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    str = (char)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}