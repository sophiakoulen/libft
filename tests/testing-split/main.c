#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_split...\n");

    char s1[] = "AahuaaAaAAAaaaAAaaA";
    char c = 'a';
    char	**arr = ft_split(s1, c);
	unsigned int i;
	i = 0;
    while (arr[i])
	{
		printf("truc: ");
		printf("%s\n", arr[i]);
		i++;
	}
	while (i)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
    return (0);
}