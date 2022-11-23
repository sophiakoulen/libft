#include "unit-tests.h"

static int	count = 12;

void	*malloc(size_t size)
{
	static void *(*real_malloc)(size_t) = NULL;

	if (real_malloc == NULL)
	{
		real_malloc = (void *(*)(size_t))dlsym(RTLD_NEXT, "malloc");
	}

	if (count == 0)
	{
		return (NULL); 
	}
	else
	{
		count--;
		return (real_malloc(size));
	}
}

void test_split2(void)
{
	char *str1 = "AAAIBAIIIAIIAIIIAI";
	char *sep = "ABCCDGAGF";
	char **res = ft_split2(str1, sep);
	int i = 0;
	if (!res)
	{
		printf("res is NULL\n");
		return ;
	}
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}