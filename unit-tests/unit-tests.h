#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

# include "libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <assert.h>
# include <fcntl.h>
# include <dlfcn.h>
# include <unistd.h>
# include <limits.h>

void	test_ft_nbr_len(void);
void	test_ft_nbr_len_unsigned(void);

void	test_ft_itoa_base(void);
void	test_ft_putnbr_base_fd(void);
void	test_ft_itoa_base_unsigned(void);
void	test_ft_putnbr_base_unsigned_fd(void);

void	test_split2(void);

#endif