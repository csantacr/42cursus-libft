#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
}
