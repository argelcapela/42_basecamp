void	ft_putchar(char c);

void	start_end(int x, char cpontas, char cmeio)
{
	int	cx;

	cx = 1;
	while (cx <= x)
	{
		if (cx == 1 | cx == x)
		{
			ft_putchar(cpontas);
		}
		else
		{
			ft_putchar(cmeio);
		}
		cx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cy;

	cy = 1;
	while (cy <= y)
	{
		if (cy == 1)
		{
			start_end(x, 'A', 'B');
		}
		else if (cy > 1 && cy < y)
		{
			start_end(x, 'B', ' ');
		}
		else
		{			
			start_end(x, 'C', 'B');
		}
		cy++;
	}	
}
