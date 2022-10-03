/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:40:59 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/02 14:41:07 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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