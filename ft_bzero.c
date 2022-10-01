/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:37:43 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/21 20:06:19 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int main(void)
{
	char str[] = "hola que tal";
	int i;
	char *ptr;

	printf("before:	%s\n", str);
	i = 0;
	ptr = str;
	bzero(str, 3);
	//ft_bzero(str, 3);
	while (i < 5)
	{
		if (*ptr ==  0)
			printf("cero\n");
		ptr++;
		i++;
	}
	printf("after:	%s\n", str);
	return (0);
} */