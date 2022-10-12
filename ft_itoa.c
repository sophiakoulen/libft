#include "libft.h"

static char	*itoa_helper(int n, char *ptr)
{
	if (n >= 10 || n <= -10)
		ptr = itoa_helper(n / 10, ptr);
	*ptr = (n % 10) * ft_sign(n) + '0';
	*(ptr + 1) = 0;
	return (ptr + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*ptr;
	size_t	len;


	len = ft_digitcount(n);
	str = malloc(len + 1);
	ptr = str;
	if (ft_sign(n) == -1)
	{
		*str = '-';
		str++;
	}
	itoa_helper(n, str);
	return (ptr);
}
