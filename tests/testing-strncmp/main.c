#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strncmp...\n");

    char buffer1[SIZE];
    char buffer2[SIZE];
    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(buffer1, 0, SIZE);
        memset(buffer2, 0, SIZE);

        scanf("%s", buffer1);
        scanf("%s", buffer2);

        for (int i = 0; i < 32; i++)
        {
            int ret1 = strncmp(buffer1, buffer2, i);
            int ret2 = ft_strncmp(buffer1, buffer2, i);
            assert(ret1 == ret2);
        }
        printf("testcase #%d: OK!\n", t);
    }
    memset(buffer1, 0, SIZE);
    memset(buffer2, 0, SIZE);
    int ret1 = strncmp(buffer1, buffer2, 3);
    int ret2 = ft_strncmp(buffer1, buffer2, 3);
    assert(ret1 == ret2);
    printf("empty string: OK!\n");
    return (0);
}