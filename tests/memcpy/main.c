#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memcpy and memmove...\n");

	char *dst = 0;
	char *src = 0;
	char *ret = memmove(dst, src, 9);
	printf("%p\n", ret);
    return (0);
}