#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_atoi...\n");

    char buffer[SIZE];
    int n1, n2;
    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(buffer, 0, SIZE);
        scanf("%s", buffer);
        n1 = ft_atoi(buffer);
        n2 = atoi(buffer);

        assert(n1 == n2);
        printf("testcase #%d: OK!\n", t);
    }
    memset(buffer, 0, SIZE);
    n1 = ft_atoi(buffer);
    n2 = atoi(buffer);
    assert(n1 == n2);
    printf("empty string: OK!\n");

    return (0);
}