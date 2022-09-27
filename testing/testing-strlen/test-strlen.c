#include "libft.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int main()
{
    int     T;
    size_t  s;
    char    buffer[SIZE];
    char    copy[SIZE];

    scanf("%d\n", &T);
    for(int t = 0; t < T; t++)
    {
        scanf("%s", buffer);
        s = strlen(buffer);
        memcpy(copy, buffer, s + 1);
        assert(ft_strlen(buffer) == s);
        for(int i = 0; i <= (int)s; i++)
        {
            // check that the buffer is left unchanged
            assert(copy[i] == buffer[i]);
        }
        printf("#test-%d: OK!\n", t);
    }
}