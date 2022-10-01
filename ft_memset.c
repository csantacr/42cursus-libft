/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:14:39 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/22 21:44:16 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*int main(void)
{
	char str[] = "hola que tal";

	printf("before:	%s\n", str);
	//memset(str + 1, '-', 3*sizeof(char));
	ft_memset(str + 1, '-', 3*sizeof(char));
	printf("after:	%s\n", str);
	return (0);
}*/