#include "test.h"

int main(void)
{
	printf("testing libft with the check framework\n");

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