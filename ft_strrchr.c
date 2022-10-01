/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:37:29 by marvin            #+#    #+#             */
/*   Updated: 2022/09/21 19:13:38 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	s += len;
	while (i <= len)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char *str = "tripouille";

	printf("%c\n", 'A' + 256);
	printf("return ft: %s\n", ft_strrchr(str, 't' + 256));
	printf("return og: %s\n", strrchr(str, 't' + 256));
	return (0);
} */