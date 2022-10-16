#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memset...\n");

	char *dst = 0;
	char *ret = memset(dst, 0, 15);
	printf("%p\n", ret);
    return (0);
}