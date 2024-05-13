#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb >= 65535 && size >= 65535) || nmemb * size >= 65535)
		return (NULL);
	ptr = (void*)malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	ft_bzero(ptr, nmemb);
	return (ptr);
}
