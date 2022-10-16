#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

int main()
{
    printf("testing ft_lstnew...\n");

	t_list *n;
	int number = 14;
	n = ft_lstnew(&number);
	printf("%p\n", n);
	printf("%d\n", *(int *)n->content);
	printf("%p\n", n->next);
	free(n);
    return (0);
}