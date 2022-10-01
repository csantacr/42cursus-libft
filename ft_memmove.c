/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:27 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/27 19:55:24 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (0 < len)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* int main(void)
{
	char str[] = "lorem ipsum dolor sit amet";
	//char str2[] = "adios";

	printf("antes:		%s\n", str);
	//memcpy(str + 2, str, 6);
	//memmove(str, str + 2, 6);
	ft_memmove(((void *)0), ((void *)0), 5);
	printf("despues:	%s\n", str);
	return (0);
} */