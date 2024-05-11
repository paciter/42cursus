#include "libft.h"

int ft_itoa_size(int n)
{
    int size = 0;

    if (n < 0)
    {
        size++;
        n = -n;
    }
    else if (n == 0)
    {
        return 1;
    }

    while (n >= 1)
    {
        n /= 10;
        size++;
    }

    return size;
}

char *ft_itoa(int n)
{
    char *str;
    int size;
    int neg;

    size = ft_itoa_size(n);
    neg = (n < 0 ? 1 : 0);

    str = (char *)malloc(sizeof(char) * (size + 1));
    if (str == NULL)
        return (0);

    if (n == 0)
        str[0] = '0';
    else if (n == -2147483648)
    {
        str = ft_substr("-2147483648", 0, 11)
        return str;
    }
    else
    {
        int i = size - 1;
        str[size] = '\0';
        if (n < 0)
        {
            str[0] = '-';
            n *= -1;
        }
        while (n > 0)
        {
            str[i--] = (n % 10) + '0';
            n /= 10;
        }
    }

    return (str);
}
