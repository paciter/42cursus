#include "test.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t = i;

	i = 0;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;

	while(i < n)
	{
		if(c1[i] > c2[i])
			return 1;
		else if(c1[i] < c2[i])
			return -1;
		else if (c1[i] = c2[i])
			return(0);
		i++;
	}
}
