#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memcmp...\n");

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
            int ret1 = memcmp(buffer1, buffer2, i);
            int ret2 = ft_memcmp(buffer1, buffer2, i);
            assert(ret1 == ret2);
        }
        printf("testcase #%d: OK!\n", t);
    }
    memset(buffer1, 0, SIZE);
    memset(buffer2, 0, SIZE);
    int ret1 = memcmp(buffer1, buffer2, 3);
    int ret2 = ft_memcmp(buffer1, buffer2, 3);
    assert(ret1 == ret2);
    printf("empty string: OK!\n");

	char *s1 = 0;
	char *s2 = 0;
	int ret = memcmp(s1, s2, 15);
	printf("%d\n", ret);

    return (0);
}