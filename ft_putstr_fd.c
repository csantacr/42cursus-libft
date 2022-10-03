/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:41:41 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/02 23:52:31 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	fd = open("hola.txt", O_WRONLY);
	if (fd == -1)
		perror("main");
	ft_putstr_fd("hola", fd);
	close(fd);

	return (0);
} */