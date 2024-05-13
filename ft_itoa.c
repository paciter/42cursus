#include "libft.h"

static int	ft_itoa_size(int n)
{
	int size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	if (n == -2147483648) // Gérer le cas spécial INT_MIN
		return (ft_strdup("-2147483648"));

	size = ft_itoa_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = size - 1;
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		if (n < 0)
		{
			str[0] = '-';
			n = -n; // Convertir en positif
		}
		while (n != 0)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
