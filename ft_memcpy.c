/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:10:21 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/21 21:44:43 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a_dst;
	const unsigned char	*a_src;

	if (!dst && !src)
		return (0);
	a_dst = dst;
	a_src = src;
	while (n--)
		*a_dst++ = *a_src++;
	return (dst);
}

/* int main(void)
{
	char str[] = "hola que ";
	char str2[] = "tal";

	//memcpy(str, str2, 2);
	ft_memcpy(str, str2, 2);
	printf("%s\n", str);
	return (0);
} */