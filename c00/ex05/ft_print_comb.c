#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, sizeof(char));
	write(1, &d, sizeof(char));
	write(1, &u, sizeof(char));
	write(1, ",", sizeof(char));
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			d++;
			u = '0';
		}
		c++;
		d = '0';
		u = '0';
	}
}
