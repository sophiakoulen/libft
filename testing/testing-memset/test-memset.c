#include "libft.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memset...\n");

    int T, c, n;
    char tape[SIZE];
    char *ret;

    scanf("%d\n", &T);
    for(int t = 0; t < T; t++)
    {
        memset(tape, 0, SIZE);

        scanf("%s\n", tape);
        scanf("%d %d\n", &c, &n);
    
        ret = ft_memset(tape, c, n);
        assert(ret == tape);

        for(int i = 0; i < n; i++)
        {
            assert(*(tape + i) == c);
        }
        printf("#test-%d: OK!\n", t);
    }
}