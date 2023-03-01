#include "test.h"

static void	test(char *s1, char *s2)
{
	ck_assert_int_eq(ft_strcmp(s1, s2), strcmp(s1, s2));
	ck_assert_int_eq(ft_strcmp(s2, s1), strcmp(s2, s1));
}

//different strings

START_TEST(test_strcmp_diff1)
{
	test("hello world", "this is the first test");
}
END_TEST

START_TEST(test_strcmp_diff2)
{
	test("a", "b");
}
END_TEST

START_TEST(test_strcmp_diff3)
{
	test("abcdefghijklmn", "abcdefghijklma");
}
END_TEST

START_TEST(test_strcmp_diff4)
{
	int		size = 5000;
	char	*s1 = malloc(size);
	char	*s2 = malloc(size);

	for(int i = 0; i < size - 2; i++)
	{
		s1[i] = s2[i] = i % 256;
	}
	s1[size - 2] = 42;
	s2[size - 2] = -42;
	s1[size - 1] = s2[size - 1] = 0;
	test(s1, s2);
	free(s1);
	free(s2);
}
END_TEST

// same strings

START_TEST(test_strcmp_same1)
{
	test("hello world", "hello world");
}
END_TEST

START_TEST(test_strcmp_same2)
{
	test("a", "a");
}
END_TEST

START_TEST(test_strcmp_same3)
{
	test("", "");
}
END_TEST

//substrings

START_TEST(test_strcmp_substr1)
{
	test("hello", "hello world");
}
END_TEST

START_TEST(test_strcmp_substr2)
{
	test("aaaa", "aa");
}
END_TEST

START_TEST(test_strcmp_substr3)
{
	test("abc", "ab");
}
END_TEST

START_TEST(test_strcmp_substr4)
{
	test("", "hello world");
}
END_TEST

START_TEST(test_strcmp_substr5)
{
	test("a", "");
}
END_TEST

//null strings
START_TEST(test_strcmp_null1)
{
	ft_strcmp(NULL, "hello");
}
END_TEST

START_TEST(test_strcmp_null2)
{
	ft_strcmp("hello", NULL);
}
END_TEST

START_TEST(test_strcmp_null3)
{
	ft_strcmp(NULL, NULL);
}
END_TEST

START_TEST(test_strcmp_null4)
{
	ft_strcmp("", NULL);
}
END_TEST

START_TEST(test_strcmp_null5)
{
	ft_strcmp(NULL, "");
}
END_TEST

Suite	*strcmp_suite(void)
{
	Suite	*s;
	TCase	*tc_diff;
	TCase	*tc_same;
	TCase	*tc_substr;
	TCase	*tc_null;

	s = suite_create("strcmp");

	tc_diff = tcase_create("different strings");
	tcase_add_test(tc_diff, test_strcmp_diff1);
	tcase_add_test(tc_diff, test_strcmp_diff2);
	tcase_add_test(tc_diff, test_strcmp_diff3);
	tcase_add_test(tc_diff, test_strcmp_diff4);
	suite_add_tcase(s, tc_diff);

	tc_same = tcase_create("same strings");
	tcase_add_test(tc_same, test_strcmp_same1);
	tcase_add_test(tc_same, test_strcmp_same2);
	tcase_add_test(tc_same, test_strcmp_same3);
	suite_add_tcase(s, tc_same);

	tc_substr = tcase_create("sub strings");
	tcase_add_test(tc_substr, test_strcmp_substr1);
	tcase_add_test(tc_substr, test_strcmp_substr2);
	tcase_add_test(tc_substr, test_strcmp_substr3);
	tcase_add_test(tc_substr, test_strcmp_substr4);
	tcase_add_test(tc_substr, test_strcmp_substr5);
	suite_add_tcase(s, tc_substr);

	tc_null = tcase_create("null strings");
	tcase_add_test_raise_signal(tc_null, test_strcmp_null1, SIGSEGV);
	tcase_add_test_raise_signal(tc_null, test_strcmp_null2, SIGSEGV);
	tcase_add_test_raise_signal(tc_null, test_strcmp_null3, SIGSEGV);
	tcase_add_test_raise_signal(tc_null, test_strcmp_null4, SIGSEGV);
	tcase_add_test_raise_signal(tc_null, test_strcmp_null5, SIGSEGV);
	suite_add_tcase(s, tc_null);

	return (s);
}
