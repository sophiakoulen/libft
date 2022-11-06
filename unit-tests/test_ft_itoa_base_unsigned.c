# include "unit-tests.h"

static void	test(unsigned int n, char *symbols, char *expected)
{
	char *actual;

	actual = ft_itoa_base_unsigned(n, symbols);
	printf("actual: %s\n", actual);
	assert(strcmp(actual, expected) == 0);
	free(actual);
}

void	test_ft_itoa_base_unsigned(void)
{
	unsigned int	n;
	char			*symbols;

	symbols = "0123456789";

	n = UINT_MAX;
	test(n, symbols, "4294967295");

	n = INT_MAX;
	test(n, symbols, "2147483647");
}