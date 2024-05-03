#include "libft.h"

void * calloc( size_t elementCount, size_t elementSize )
{
	void	*ptn;

	ptn = malloc(elementSize * elementCount);
	if (!ptn)
		return (NULL);
	ft_bzero(ptn, elementCount);
	return (ptn);
}