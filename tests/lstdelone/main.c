#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

/*static void f(void *content)
{
	printf("%d\n", *(int *)content);
}

static void print_list(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}*/

static void	f(void * thing)
{
	free(thing);
}

int main()
{
    printf("testing ft_lstclear...\n");

	int *n = malloc(sizeof(*n));
	*n = 10;
	t_list *lst = ft_lstnew(n);
	ft_lstdelone(lst, f);
    return (0);
}