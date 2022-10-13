#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strnstr...\n");

    char buffer[SIZE];

    char *ptr;

    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(buffer, 0, SIZE);
        scanf("%s", buffer);

        ptr = ft_strdup(buffer);
        printf("%s\n%s\n", ptr, buffer);
        assert(strcmp(buffer, ptr) == 0);

        printf("testcase #%d: OK!\n", t);
    }
    memset(buffer, 0, SIZE);
    ptr = ft_strdup(buffer);
    assert(strcmp(buffer, ptr) == 0);
    printf("empty string: OK!\n");

    return (0);
}