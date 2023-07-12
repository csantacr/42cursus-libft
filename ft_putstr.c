#include "libft.h"

/**
 * The ft_putstr function takes a string as input and prints it to the standard output, returning the
 * number of characters printed.
 * 
 * @param str str is a pointer to a character, which represents the string that needs to be printed.
 * 
 * @return the number of characters printed, which is stored in the variable "bc".
 */
int	ft_putstr(char *str)
{
	int	bc;

	bc = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		bc++;
	}
	return (bc);
}
