#include "libft.h"

/**
 * The function ft_putnbr takes an integer as input and prints it to the standard output.
 * 
 * @param nb The parameter `nb` is an integer that represents the number to be printed.
 * 
 * @return the number of characters printed.
 */
int	ft_putnbr(int nb)
{
	unsigned int	unb;

	unb = 0;
	if (nb == -2147483648)
	{
		unb += ft_putnbr(-214748364);
		unb += ft_putchar('8');
	}
	else if (nb < 0)
	{
		unb += ft_putchar('-');
		unb += ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			unb += ft_putnbr(nb / 10);
		unb += ft_putchar((nb % 10) + '0');
	}
	return (unb);
}
