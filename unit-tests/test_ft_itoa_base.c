#include "unit-tests.h"

void test_ft_itoa_base(void)
{
	char *res;
	int	n;
	char *symbols;

	n = 5;
	symbols = "edcba";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "de") == 0);

	n = -5;
	symbols = "edcba";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "-de") == 0);

	n = 5;
	symbols = "axwgr";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "xa") == 0);

	n = 25;
	symbols = "axwgr";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "xaa") == 0);

	n = 26;
	symbols = "axwgr";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "xax") == 0);

	n = 0;
	symbols = "42";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "4") == 0);

	n = 1;
	symbols = "42";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "2") == 0);

	n = -1;
	symbols = "42";	
	res = ft_itoa_base(n, symbols);
	assert(strcmp(res, "-2") == 0);
}