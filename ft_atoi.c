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

/* static char	*get_numstr(char *n)
{
	char *str;

	str = malloc()
	if (*n == '+' || *n == '-')
		n++;
	while (*n && (*n >= '0' && *n <= '9'))
	{
		*str = *n;
		str++;
		n++;
	}
	return (str);
} */

static int	check_long_min_max(char *n)
{
	
	if (ft_strlen(n) == 19)
	{
		if (ft_strncmp(n, "9223372036854775807", 19) > 0)
			return (0);
	}
	else if (ft_strlen(n) > 19)
	{
		if (ft_strlen(n) == 20 && *n == '-')
		{
			if (ft_strncmp(n, "-9223372036854775808", 20) > 0)
				return (0);
		}
		else
			return (0);
	}
	return (1);
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
	// printf("%s\n", get_numstr(*nptr));
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

/* int	ft_atoi(const char *nptr)
{
	long long int	nbr;
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
} */

/* static int	aux(const char *str, int i)
{
	int	flg;
	int	rtn;
	flg = 1;
	rtn = 0;
	if (str[i] == 43)
		i++;
	else if (str[i] == 45)
	{
		flg *= -1;
		i++;
	}
	if (str[i] >= 48 && str[i] <= 57)
	{
		rtn = rtn + str[i] - 48;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rtn = rtn * 10 + str[i] - 48;
		i++;
	}
	return (rtn * flg);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (!((str[i] == 43) || (str[i] == 45) || (str[i] >= 48 && str[i] <= 57)))
		return (0);
	result = aux(str, i);
	return (result);
} */

/* int main(void)
{
	//char *str = "  	  -123THERE IS A NYANCAT UNDER YOUR BED";
	char *str = "9223372036854775810";
	//char *str = "2147483648";
	//char *str = "-2147483648";
	
	printf("size: %zu\n", sizeof(long long int));
	printf("str: %s\n", str);
	printf("ft:  %d\n", ft_atoi(str));
	printf("og:  %d\n", atoi(str));
	printf("minmax: %d\n", check_long_min_max(str));
	printf("len: %ld\n", ft_strlen(str));
	return (0);
} */