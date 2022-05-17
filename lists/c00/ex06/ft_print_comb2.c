#include <unistd.h>

void	ft_putchar(int i)
{
	int	u;
	int	d;

	if (i < 10)
	{
		u = i + '0';
		write(1, "0", 1);
		write(1, &u, sizeof(char));
	}
	else
	{
		d = (i / 10) + '0';
		u = (i % 10) + '0';
		write(1, &d, sizeof(char));
		write(1, &u, sizeof(char));
	}
}

void	ft_print_comb(void)
{	
	int	d;
	int	u;

	d = 0;
	u = 1;
	while (d <= 98)
	{
		while (u <= 99)
		{
			ft_putchar(d);
			write(1, " ", 2);
			ft_putchar(u);
			if (d < 98)
			{
				write(1, ", ", 2);
			}			
			u++;
		}
		d++;
		u = d + 1;
	}
}
