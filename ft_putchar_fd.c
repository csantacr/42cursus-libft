
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	int	fd;

	fd = open("hola.txt",'w');
	ft_putchar_fd('c', fd);
	close(fd);

	return (0);
} */