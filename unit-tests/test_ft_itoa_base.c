#include "unit-tests.h"

void test_ft_itoa_base(void)
{
	char *res;
	int	n;
	char *symbols;

	n = -25;
	symbols = "abcde";	
	res = ft_itoa_base(n, symbols);

	printf("res: %s\n", res);
}