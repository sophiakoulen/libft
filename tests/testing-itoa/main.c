#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main(int argc, char **argv)
{
    printf("testing ft_itoa...\n");
	(void)argc;

    int n = atoi(argv[1]);
	printf("n\n");
    char *s = ft_itoa(n);
    printf("%s\n", s);
    free(s);
    return (0);
}