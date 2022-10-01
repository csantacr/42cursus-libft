/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:53:48 by csantacr          #+#    #+#             */
/*   Updated: 2022/09/28 14:28:41 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

/* int main(void)
{
	int *ptr;
	int i;

	ptr = ft_calloc(6, sizeof(int));
	//ptr = calloc(6, sizeof(int));
	i = 0;
	while (i < 6)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
} */