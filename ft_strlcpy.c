#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
 {
    size_t i; 
	i = 0;
    while (i < size - 1 && src[i]) 
	{
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';

    while (src[i])
        i++;
    return i;
}

/*
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

int main() {
    char src[] = "Hello, wor!";
    char dst[10]; // Destination buffer

    // Testing chatgpt_strlcpy
    size_t copied_length = ft_strlcpy(dst, src, sizeof(dst));
    
    // Printing the copied string and the length
    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", copied_length);
}*/