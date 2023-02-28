#include "check.h"
#include <stdio.h>

START_TEST(test_strcmp1)
{
	char	*str1 = "hello world"
	char	*str2 = "this is the first test";
	ck_assert_int_eq(ft_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

int main()
{
	printf("testing the libft\n");
	return (0);
}
