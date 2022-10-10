#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (dst[i] && i < dstsize)
        i++;
    j = 0;
    while (src[j] && i + j + 1 < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i + j < dstsize)
    {
        dst[i + j] = 0;
    }
    while (src[j])
        j++;
    return (i + j);
}