#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i; 
	 
	i = 0;
	 
	 if (!dest || !src)
		return (0);
    while (i + 1 < size && src[i]) 
	{
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
    {
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

