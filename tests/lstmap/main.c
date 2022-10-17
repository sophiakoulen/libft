#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SIZE 1024

static void func(void *thing)
{
	*(int *)thing = 42;
}

static void	*twice(void *thing)
{
	int *truc;

	truc = malloc(sizeof(*truc));
	*truc = 2 * *(int *)thing;
	return (truc);
}

static void f(void *content)
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
}

static void	del(void *thing)
{
	free(thing);
}

int main()
{
    printf("testing ft_lstmap...\n");

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
	t_list *l2 = ft_lstmap(lst, twice, del);
	print_list(lst, f);
	print_list(l2, f);
    return (0);
}