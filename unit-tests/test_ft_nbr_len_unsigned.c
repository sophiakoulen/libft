#include "unit-tests.h"

void test_ft_nbr_len_unsigned(void)
{
	unsigned int n;
	unsigned int base;
	int	res;

	n = 0;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 1);

	n = 1;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 1);

	n = 10;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 2);

	n = 9;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 1);

	n = 11;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 2);

	n = 99;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 2);

	n = 100;
	base = 10;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 3);

	n = 0;
	base = 2;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 1);

	n = 1;
	base = 2;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 1);

	n = 4;
	base = 2;
	res = ft_nbr_len_unsigned(n, base);
	assert(res == 3);
}