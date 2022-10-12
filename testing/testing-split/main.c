#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_split...\n");

    char s1[] = "aaaaAhuhaA";
    char c = 'a';
    char	**arr = ft_split(s1, c);
    while (*arr)
	{
		printf("truc: ");
		printf("%s\n", *arr);
		(arr)++;
	}
    return (0);
}