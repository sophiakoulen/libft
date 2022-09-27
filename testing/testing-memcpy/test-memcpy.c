#include "libft.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memcpy...\n");

    int T;
    char tape[1024];
    int addr1, addr2, n;
    scanf("%d\n", &T);
    for(int t = 0; t < T; t++)
    {
        memset(tape, 0, 1024);
        scanf("%s\n", tape);
        scanf("%d %d %d\n", &addr1, &addr2, &n);
        ft_memcpy(tape + addr1, tape + addr2, n);
        for(int i = 0; i < n; i++)
        {
            assert(*(tape + addr1 + i) == *(tape + addr2 + i));
        }
        printf("#test-%d: OK!\n", t);
    }
}