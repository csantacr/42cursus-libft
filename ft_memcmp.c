/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:41:10 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/27 20:55:57 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (0 < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* int main(void)
{
	char str1[] = "lorem ipsum dolor sit amet";
	char str2[] = "loram ipsum dolor sit amet";

	printf("og:	%d\n", memcmp(str1, str2, 8));
	printf("ft:	%d\n", ft_memcmp(str1, str2, 8));
	return (0);
} */