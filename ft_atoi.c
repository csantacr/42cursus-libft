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

/* static char	*remove_end_chars(char *n)
{
	char	*num;
	int		i;

	i = 0;
	num = malloc((ft_strlen(n) + 1) * sizeof(char));
	if (!num)
		return (NULL);
	while (n[i] && (n[i] > '0' && n[i] < '9'))
	{
		num[i] = n[i];
		i++;
	}
	num[i] = '\0';
	return (num);
} */

static char	*remove_end_chars(char *n)
{
	char	*num;
	int		i;

	i = 0;
	num = malloc((ft_strlen(n) + 1) * sizeof(char));
	if (!num)
		return (NULL);
	while (n[i] && (n[i] > '0' && n[i] < '9'))
	{
		num[i] = n[i];
		i++;
	}
	num[i] = '\0';
	return (num);
}

static int	check_long_min_max(char *n)
{
	int		i;
	char	sign;

	i = 0;
	if (*n == '-')
		sign = '-';
	while ((*n == '+' || *n == '-' || *n == '0'))
		n++;
	n = remove_end_chars(n);
	if (ft_strlen(n) == 19)
	{
		if (ft_strncmp(n, "9223372036854775807", 19) > 0)
			return (free(n), 0);
	}
	else if (ft_strlen(n) > 19)
	{
		if (ft_strlen(n) == 20 && sign == '-')
		{
			if (ft_strncmp(n, "-9223372036854775808", 20) > 0)
				return (free(n), 0);
		}
		else
			return (free(n), 0);
	}
	return (free(n), 1);
}

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (!check_long_min_max((char *)nptr) && *nptr == '-')
		return (0);
	else if (!check_long_min_max((char *)nptr))
		return (-1);
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

/* int main(void)
{
	//(CASO 1) char *str = "-123THERE IS A NYANCAT UNDER YOUR BED";
	//char *str = "-123THERE IS A NYANCAT UNDER YOUR BED";
	char *str = "643643634hfhdjdg";
	//char *str = "esto es una prueba";
	
	printf("size: %zu\n", sizeof(long long int));
	printf("str: %s\n", str);
	printf("ft:  %d\n", ft_atoi(str));
	printf("og:  %d\n", atoi(str));
	printf("minmax: %d\n", check_long_min_max(str));
	printf("len: %ld\n", ft_strlen(str));
	return (0);
} */
