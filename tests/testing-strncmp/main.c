#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strncmp...\n");

    char *str1 = "aaa";
	char *str2 = "a\200";
	int m = 6;
	int n1 = ft_strncmp(str1, str2, m);
	int n2 = strncmp(str1, str2, m);
	printf("%d %d\n", n1, n2);
	assert(((n1 > 0) && (n2 > 0)) || ((n1 < 0) && (n2 < 0)) || (!n1 && !n2));
    return (0);
}