#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;

	char	*destcopy;
	char	*srcopy;
	if (dest == (NULL))
		return NULL;
	destcopy = (char *)dest;
	srcopy = (char *)src;
	while (i < n)
	{
		destcopy[i] = srcopy[i];
		i++;
	}
	return dest;
	
}
/*
int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 2);
	printf("%s", ret);
	return (0);
}
*/
