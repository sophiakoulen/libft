# include "unit-tests.h"

static	void test(int n, char *symbols)
{
	int		fd1, fd2;
	char	*str, actual[1024], expected[1024];

	fd1 = open("expected.txt", O_CREAT | O_RDWR);
	fd2 = open("actual.txt", O_CREAT | O_RDWR);

	str = ft_itoa_base(n, symbols);
	ft_putstr_fd(str, fd1);
	ft_putnbr_base_fd(n, symbols, fd2);

	read(fd1, expected, 1024);
	read(fd2, actual, 1024);

	assert(strcmp(expected, actual) == 0);

	close(fd1);
	close(fd2);

	remove("expected.txt");
	remove("actual.txt");
}

void	test_ft_putnbr_base_fd(void)
{
	int		n;
	char	*symbols;

	symbols = "xy";
	for (n = -17; n <= 17; n++)
		test(n, symbols);

	symbols = "ATGC";
	for (n = -12; n <= 99; n++)
		test(n, symbols);
	
}