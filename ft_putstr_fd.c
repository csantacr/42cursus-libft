
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/* int main(void)
{
	int	fd;

	fd = open("hola.txt",'w');
	ft_putstr_fd("hola", fd);
	close(fd);

	return (0);
} */