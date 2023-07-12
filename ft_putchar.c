#include "libft.h"

/**
 * The function `ft_putchar` writes a single character to the standard output.
 * 
 * @param c The parameter "c" is of type "char" and represents the character that needs to be printed.
 * 
 * @return the result of the write() function, which is the number of characters written.
 */
int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}
