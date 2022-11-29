/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:56:58 by marvin            #+#    #+#             */
/*   Updated: 2022/11/19 21:10:04 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_min_max(char *n)
{
	if (*n == '-')
	{
		if (ft_strlen(n) > 11)
			return (0);
		else if (ft_strlen(n) == 11)
		{
			if (ft_strncmp(n, "-2147483648", 11) > 0)
			{
				printf("strncmp: %d\n", ft_strncmp(n, "-2147483648", 11));
				return (1);
			}
		}
	}
	else
	{
		if (ft_strlen(n) > 10)
			return (-1);
		else if (ft_strlen(n) == 10)
		{
			if (ft_strncmp(n, "2147483647", 10) > 0)
			{
				printf("strncmp: %d\n", ft_strncmp(n, "2147483647", 10));
				return (1);
			}
		}
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\r' || *nptr == '\f')
		nptr++;
	if (*nptr == '-')
	{
		sign = -sign;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = (nbr * 10) + (*nptr - 48);
		nptr++;
	}
	return (nbr * sign);
}

int main(void)
{
	// char *str = " \t \v -6543  365";
	//char *str = "-99999999999999999999999999";
	//char *str = "2147483647";	//len 10
	char *str = "-2147483648";	//len 11

	printf("ft: %d\n", ft_atoi(str));
	printf("og: %d\n", atoi(str));
	printf("minmax: %d\n", check_min_max(str));
	printf("len: %ld\n", ft_strlen(str));
	return (0);
}