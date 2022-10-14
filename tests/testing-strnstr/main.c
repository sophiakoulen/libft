#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strnstr...\n");

    char haystack[] = "aabcaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char *needle = haystack;
	char *ret = ft_strnstr(haystack, needle, 1024);
	assert(ret == strnstr(haystack, needle, 1024));
	printf("%p\n", ret);
    return (0);
}