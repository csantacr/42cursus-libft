
#include "libft.h"

static int	count_words(char *s, char c)
{
	int	count;

	if (!(*s))
		return (0);
	count = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			count += 1;
		s++;
	}
	return (count);
}

static int	*words_len(int words_count, char *str, char sep)
{
	int	*words_lens;
	int	len;
	int	word;

	words_lens = (int *) malloc(words_count * sizeof(int));
	if (!words_lens)
		return (NULL);
	len = 0;
	word = 0;
	while (*str)
	{
		if (*str == sep)
		{
			words_lens[word] = len;
			len = 0;
			word++;
		}
		else
			len++;
		str++;
	}
	words_lens[word] = len;
	return (words_lens);
}

static void	write_word(char *str, char *word, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		*words_lens;
	int		words_n;
	int		start;
	int		i;

	words_n = count_words((char *)s, c);
	words_lens = words_len(words_n, (char *)s, c);
	start = 0;
	i = 0;
	strings = (char **) malloc(words_n * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < words_n)
	{
		strings[i] = (char *) malloc((words_lens[i] + 1) * sizeof(char *));
		if (!strings[i])
			return (NULL);
		write_word((char *)s + start, strings[i], c);
		start += words_lens[i] + 1;
		i++;
	}
	return (strings);
}

int main(void)
{
	char *str = "      split       this for   me  !   ";
	char **strings;
	int	i;

	printf("string:	%s\n", str);
	printf("wcount:	%d\n", count_words(str, ' '));
	strings = ft_split(str, ' ');
	i = 0;
	while (i < count_words(str, ' '))
	{
		printf("word:	%s\n", strings[i]);
		i++;
	}
	//printf("test:	%lu\n", sizeof(int));
	return (0);
}