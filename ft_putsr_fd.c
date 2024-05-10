#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    if (!s)
        return (NULL);
    while (s[i])
    {
        ft_putchar_fd(fd, s[i], 1)
        i++;
    }
}