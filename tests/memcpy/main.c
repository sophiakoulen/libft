#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memcpy...\n");

    char *str1 = "aaa";
	char *str2 = "AAAA";
	int m = 2;
	ft_memcpy(str1, str2, m);
    return (0);
}