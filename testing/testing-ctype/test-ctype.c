#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <assert.h>
#include "libft.h"

int main()
{
    printf("testing ft_isalnum...\n");
    printf("testing ft_isalpha...\n");
    printf("testing ft_isascii...\n");
    printf("testing ft_isdigit...\n");
    printf("testing ft_isprint...\n");

    for(int i = 0; i <= 255; i++)
    {
        assert(!!ft_isalnum(i) == !!isalnum(i));
        assert(!!ft_isalpha(i) == !!isalpha(i));
        assert(!!ft_isascii(i) == !!isascii(i));
        assert(!!ft_isdigit(i) == !!isdigit(i));
        assert(!!ft_isprint(i) == !!isprint(i));
    }
    return 0;
}