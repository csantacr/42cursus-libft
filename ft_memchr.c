/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:59:54 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/27 20:39:20 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (0 < n)
	{
		if (*((char *)s) == (char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "lorem ipsum dolor sit amet";

	printf("ft:	%s\n", ft_memchr(str, 'i', 7));
	printf("og:	%s\n", memchr(str, 'i', 7));
	return (0);
} */