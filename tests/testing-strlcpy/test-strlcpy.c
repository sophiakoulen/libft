#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strlcat...\n");
    char src[SIZE];
    char dest[SIZE];
    char dest1[SIZE];
    char dest2[SIZE];
    int n;
    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(src, 0, SIZE);
        memset(dest, 0, SIZE);
        memset(dest1, 0, SIZE);
        memset(dest2, 0, SIZE);

        scanf("%s", src);
        scanf("%s", dest);
        scanf("%d", &n);
        
        memcpy(dest1, dest, SIZE);
        memcpy(dest2, dest, SIZE);

        int ret1 = ft_strlcpy(dest1, src, n);
        int ret2 = strlcpy(dest2, src, n);
        assert(ret1 == ret2);
        assert(strncmp(dest1, dest2, n) == 0);

        printf("testcase #%d: OK!\n", t);
    }
    //empty string
    int ret1 = ft_strlcpy(dest1, "", SIZE);
    int ret2 = ft_strlcpy(dest2, "", SIZE);
    assert(ret1 == ret2);
    assert(dest1[0] == dest2[0]);
    printf("empty string: OK!\n");
    return (0);
}