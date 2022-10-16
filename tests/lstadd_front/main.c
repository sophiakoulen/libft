#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

static void f(void *content)
{
	printf("%d\n", *(int *)content);
}

static void print_list(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		printf("hello\n");
		f(lst->content);
		lst = lst->next;
	}
}

int main()
{
    printf("testing ft_lstadd_front...\n");

	t_list *lst;
	lst = 0;
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		int *number = malloc(sizeof (*number));
		*number = i;
		t_list *elt = ft_lstnew(number);
		assert(elt->next == 0);
		ft_lstadd_front(&lst, elt);
	}
	print_list(lst, f);
    return (0);
}