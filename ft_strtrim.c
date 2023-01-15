/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:56:50 by csantacr          #+#    #+#             */
/*   Updated: 2023/01/15 19:30:04 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_len(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0 && check_set(s1[len - 1], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	len = get_len(s1 + i, set);
	str = ft_substr(s1, i, len);
	return (str);
}
