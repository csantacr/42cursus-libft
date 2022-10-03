/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:37:48 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/03 03:54:15 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = (long)n;
	str = (char *) malloc((get_len(nbr) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = get_len(nbr);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	str[i] = '\0';
	i--;
	if (nbr == 0)
		str[i] = '0';
	while (nbr)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (str);
}

/* int main(void)
{
	// int nbr = -6437;
	//int nbr = 0;
	int nbr = 2147483647;

	printf("len:	%d\n", get_len(nbr));
	printf("return:	%s\n", ft_itoa(nbr));
	return (0);
} */