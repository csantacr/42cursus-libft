/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:46:47 by csantacr          #+#    #+#             */
/*   Updated: 2023/01/12 18:22:43 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	if (!(*s))
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || !(*(s + 1))))
			count++;
		s++;
	}
	return (count);
}

// first lines advance leading zeroes and signs

static int	*get_words_lens(int words_count, char const *str, char sep)
{
	int	*words_lens;
	int	len;

	words_lens = (int *) malloc((words_count + 1) * sizeof(int));
	if (!words_lens)
		return (NULL);
	len = 0;
	while (*str)
	{
		if (*str == sep)
		{
			len = 0;
			str++;
			continue ;
		}
		len++;
		if (*(str + 1) == sep || *(str + 1) == '\0')
		{
			*words_lens = len;
			words_lens++;
		}
		str++;
	}
	*words_lens = len;
	return (words_lens - words_count);
}

static char const	*write_word(char const *str, char *word, char sep, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == sep)
		i++;
	while (j < len)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (str + i);
}

static void	free_array(char **strings, int i)
{
	while (--i >= 0)
		free(strings[i]);
	free(strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		*words_lens;
	int		words_n;
	int		i;

	if (!s)
		return (NULL);
	words_n = count_words(s, c);
	words_lens = get_words_lens(words_n, s, c);
	i = 0;
	strings = (char **) malloc((words_n + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < words_n)
	{
		strings[i] = malloc((words_lens[i] + 1) * sizeof(char));
		if (!strings[i])
			return (free_array(strings, i), NULL);
		s = write_word(s, strings[i], c, words_lens[i]);
		i++;
	}
	strings[i] = NULL;
	return (free(words_lens), strings);
}

/* int	main(void)
{
	int		i;
	char	**tab;

	// tab = ft_split("buenos dias    que tal", 32);
	tab = ft_split("      split       this for   me  !       ", 32);
	
	i = 0;
	while (i < 5)
	{
		printf("tab: %s\n", tab[i]);
		i++;
	}
	return (0);
} */