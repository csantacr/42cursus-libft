
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int main(void)
{
	int	fd;

	fd = open("hola.txt",'w');
	ft_putendl_fd("hola", fd);
	close(fd);

	return (0);
} */