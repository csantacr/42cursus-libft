/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:46:47 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/02 23:53:07 by csantacr         ###   ########.fr       */
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
		{
			free_array(strings, i);
			return (NULL);
		}
		s = write_word(s, strings[i], c, words_lens[i]);
		i++;
	}
	strings[i] = NULL;
	free(words_lens);
	return (strings);
}

/* #include <stdio.h>

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("buenos dias bueenas tardes buenas noches", 32);
	while (i < 7)
	{
		printf("string: %d %s\n", i, tab[i]);
		i++;
	}
	system ("leaks a.out");
	return (0);
} */