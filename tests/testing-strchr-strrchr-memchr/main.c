#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_strchr...\n");
    printf("testing ft_strrchr...\n");

    char buffer[SIZE];
    char *first1, *first2;
    char *last1, *last2;
    char *mem1, *mem2;
    int c;
    int T; scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        memset(buffer, 0, SIZE);

        scanf("%s", buffer);
        scanf("%d", &c);

        printf("%s %d", buffer, c);

        first1 = ft_strchr(buffer, c);
        first2 = strchr(buffer, c);

        last1 = ft_strrchr(buffer, c);
        last2 = strrchr(buffer, c);

        mem1 = ft_memchr(buffer, c, SIZE);
        mem2 = memchr(buffer, c, SIZE);

        assert(first1 == first2);
        assert(last1 == last2);
        assert(mem1 == mem2);

        printf("testcase #%d: OK!\n", t);
    }

    return (0);
}