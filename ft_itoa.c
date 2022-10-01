
#include "libft.h"

char	*ft_itoa(int n)
{
	//char	*str;
	int		size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (NULL);
}

/* int main(void)
{
	int nbr = 6437;

	printf("return:	%s\n", ft_itoa(nbr));
	return (0);
} */