#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strtrim...\n");

    char s1[] = "agagyyssyAAAauhuwhsuAaaaa";
    char set[] = "agay";

    char *s2 = ft_strtrim(s1, set);
    printf("%s\n", s2);
    free(s2);
    return (0);
}