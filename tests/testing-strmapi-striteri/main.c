#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

void	f(unsigned int i, char *c)
{
	(void)i;
	*c = 'a' + i;
}

int main()
{
    printf("testing ft_strmapi and striteri...\n");
	char s1[] = "";
    ft_striteri(s1, f);
    printf("%s\n", s1);
    return (0);
}