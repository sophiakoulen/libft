#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 1024


int main(int argc, char **argv)
{
	(void)argc;
    printf("testing fd...\n");
	int fd = open("output.txt", O_CREAT | O_RDWR);
	printf("%d\n", fd);
    ft_putnbr_fd(atoi(argv[1]), fd);
	close(fd);
    return (0);
}