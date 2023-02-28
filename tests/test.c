#include "check.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

START_TEST(test_strcmp1)
{
	char	*str1 = "hello world";
	char	*str2 = "this is the first test";
	ck_assert_int_eq(ft_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(test_strcmp2)
{
	char	*str1 = "hello world";
	char	*str2 = "hello world";
	ck_assert_int_eq(ft_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(test_strcmp3)
{
	char	*str1 = "hello";
	char	*str2 = "hello world";
	ck_assert_int_eq(ft_strcmp(str1, str2), strcmp(str1, str2));
	ck_assert_int_eq(ft_strcmp(str2, str1), strcmp(str2, str1));
}
END_TEST


Suite	*strcmp_suite(void)
{
	Suite	*s;
	TCase	*tc_core;

	s = suite_create("strcmp");

	tc_core = tcase_create("core");

	tcase_add_test(tc_core, test_strcmp1);
	tcase_add_test(tc_core, test_strcmp2);
	tcase_add_test(tc_core, test_strcmp3);
	suite_add_tcase(s, tc_core);

	return (s);
}

int main()
{
	printf("testing the libft\n");

	int	number_failed;
	Suite	*s;
	SRunner	*sr;

	s = strcmp_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0)? EXIT_SUCCESS : EXIT_FAILURE;
}
