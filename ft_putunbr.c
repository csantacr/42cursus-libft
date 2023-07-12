#include "libft.h"

/**
 * The function ft_putunbr takes an unsigned integer as input and recursively prints each digit of the
 * number.
 * 
 * @param nb The parameter "nb" is an unsigned integer that represents the number to be printed.
 * 
 * @return the total number of characters printed.
 */
int	ft_putunbr(unsigned int nb)
{
	int	bc;

	bc = 0;
	if (nb > 9)
		bc += ft_putunbr(nb / 10);
	bc += ft_putchar((nb % 10) + '0');
	return (bc);
}
