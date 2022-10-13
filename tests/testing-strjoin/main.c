#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strjoin...\n");

    char s1[] = "uheu";
	char s2[] = "";

    char *s3 = ft_strjoin(s1, s2);
    printf("%s\n", s3);
    free(s3);
    return (0);
}