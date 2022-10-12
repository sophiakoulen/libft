#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_substr...\n");

    char s1[] = "aaaaAaA";
    unsigned int start = 4;
	size_t len = 15;

    char *s2 = ft_substr(s1, start, len);
    printf("%s\n", s2);
    free(s2);
    return (0);
}