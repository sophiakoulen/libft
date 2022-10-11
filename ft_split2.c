#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			count++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char const	*skip(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static void	cleanup(char **arr, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	size_t	i;
	size_t	len;
	char	**arr;

	wc = word_count(s, c);
	arr = malloc(wc + 1);
	if (!arr)
		return (0);
	i = 0;
	while (i < wc)
	{
		s = skip(s, c);
		len = word_len(s, c);
		arr[i] = malloc(len + 1);
		if (!arr[i])
		{
			cleanup(arr, i);
			return (0);
		}
		ft_strlcpy(arr[i], s, len + 1);
		s += len + 1;
		i++;
	}
	arr[wc] = 0;
	return (arr);
}