#include "libft.h"

void    *ft_realloc(void *ptr, size_t size)
{
    void    *new_ptr;

    new_ptr = malloc(size);
    if (ptr)
    {
        ft_memcpy(new_ptr, ptr, size);
        free(ptr);
    }
    return (new_ptr);
}