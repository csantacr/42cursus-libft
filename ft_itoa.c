
#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	char	*nbr;
	int i;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	nbr = (char *) malloc((size + 1) * sizeof(char *));
	i = 0;
	while (i < size)
	{
		nbr[i] = '2';
		i++;
	}
	nbr[i] = '\0';
	printf("size: %d\n", size);
	printf("nbr: %s\n", nbr);
	return (NULL);
}

int main(void)
{
	int nbr = -6437;

	printf("return:	%s\n", ft_itoa(nbr));
	return (0);
}