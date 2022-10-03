/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:46:42 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/02 14:46:44 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		str[i + s1_len] = s2[i];
		i++;
	}
	str[i + s1_len] = '\0';
	return (str);
}

/* int main(void)
{
	char s1[] = "lorem ipsum";
	char s2[] = "dolor sit amet";
	
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */