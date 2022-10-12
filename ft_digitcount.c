#include "libft.h"

size_t	ft_digitcount(int n)
{
	size_t	len;

	len = 1;
	if (ft_sign(n) == -1)
		len++;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		len++;
	}
	return (len);
}