#include "libft.h"

typedef struct s_dynamic_container
{
	void	*data;
	size_t	i;
	size_t	max;
	size_t	size;
}	t_dynamic_container;

static	int	d_append(t_dynamic_container *c, void *thing)
{
	if (c->i == c->max)
	{
		c->max *= 2;
		c->data = ft_realloc(data, c->max * c->size);
		if (!c->data)
			return (0);
	}
	ft_memcpy(c->data + c->i, thing, size);
	c->i++;
	return (1);
}

static int	d_init(t_dynamic_container *c, size_t size)
{
	c->i = 0;
	c->max = 32;
	c->size = size;
	c->data = malloc(c->max);
	if (!c->data)
		return (0);
	return (1);
}

static void	*d_cleanup(t_dynamic_container *c)
{
	free(c->data);
}

char	**ft_split(char const *s, char c)
{
	t_dynamic_container	arr;
	t_dynamic_container	str;

	if (!d_init(&arr, sizeof(char *)))
		return (0);
	if (!d_init(&str, sizeof(char)))
	{
		d_cleanup(&arr);
		return (0);
	}
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			if (!d_append(&str, *s))
				return (0);
			s++;
		}
		if (!d_append(&arr, str->data + str->i - 1))
			return (0);
		s++;
	}
	return (dynamic_array->data);
}
