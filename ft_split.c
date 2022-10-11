#include "libft.h"

typedef struct s_dynamic_container
{
    void    *data;
    size_t  i;
    size_t  max;
    size_t  size;
} t_dynamic_container;

static void d_append(t_dynamic_container *c, void *thing)
{
    if (c->i == c->max)
    {
        c->max *=2;
        c->data = ft_realloc(data, c->max * c->size);
    }
    ft_memcpy(c->data + c->i, thing, size);
    c->i++;
}

static void *d_init(t_dynamic_container *c, size_t size)
{
    c->i = 0;
    c->max = 32;
    c->size = size;
    c->data = malloc(c->max);
}

static void *d_cleanup(t_dynamic_container *c)
{
    free(c->data);
}

char    **ft_split(char const *s, char c)
{
    char                **array;
    char                *string;
    t_dynamic_container dynamic_array;
    t_dynamic_container dynamic_string;

    d_init(&dynamic_array, sizeof(char *));
    d_init(&dynamic_string, sizeof(char));
    while (*s)
    {
        while (*s && *s == c)
            s++;
        while (*s && *s != c)
        {
            d_append(&dynamic_string, *s);
            s++;
        }
        d_append(&dynamic_array, dynamic_string->data + dynamic_string->i - 1);
        s++;
    }
    return (dynamic_array->data);
}