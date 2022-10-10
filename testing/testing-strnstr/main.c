#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strnstr...\n");

    char haystack[SIZE];
    char needle[SIZE];
    
    char *ret1, *ret2;

    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(haystack, 0, SIZE);
        memset(needle, 0, SIZE);


        scanf("%s", haystack);
        scanf("%s", needle);

        for(int i = 0; i < 32; i++)
        {
            ret1 = strnstr(haystack, needle, i);
            ret2 = ft_strnstr(haystack, needle, i);
        }

        assert(ret1 == ret2);

        printf("testcase #%d: OK!\n", t);
    }
    memset(haystack, 0, SIZE);
    memset(needle, 0, SIZE);
    ret1 = strnstr(haystack, needle, 3);
    ret2 = ft_strnstr(haystack, needle, 3);
    printf("%p %p", ret1, ret2);
    assert(ret1 == ret2);

    printf("empty string: OK!\n");

    return (0);
}