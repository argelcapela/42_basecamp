#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int	nb)
{	
	int	min_int;

	min_int = -2147483648;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb <= min_int)
		{
			nb++;
		}	
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
