#include "libft.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int main()
{
    printf("testing ft_bzero...\n");

    int T, n;
    char tape[SIZE];

    scanf("%d\n", &T);
    for(int t = 0; t < T; t++)
    {
        memset(tape, 0, SIZE);

        scanf("%s\n", tape);
        scanf("%d\n", &n);
    
        ft_bzero(tape, n);

        for(int i = 0; i < n; i++)
        {
            assert(*(tape + i) == 0);
        }
        printf("#test-%d: OK!\n", t);
    }
}