#include "libft.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int main()
{
    printf("testing ft_memmove...\n");

    int T;
    char tape[1024];
    char tmp[1024];
    int addr1, addr2, n;
    char *ret;
    scanf("%d\n", &T);
    for(int t = 0; t < T; t++)
    {
        memset(tape, 0, 1024);
        scanf("%s\n", tape);
        scanf("%d %d %d\n", &addr1, &addr2, &n);
        memcpy(tmp, tape + addr2, n);
      
        ret = ft_memmove(tape + addr1, tape + addr2, n);
        assert(ret == tape + addr1);
   
        for(int i = 0; i < n; i++)
        {
            assert(*(tape + addr1 + i) == *(tmp + i));
        }
        printf("#test-%d: OK!\n", t);
    }
}