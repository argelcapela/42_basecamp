#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		y;
	int		strlen;
	char	c;

	i = 1;
	y = 0;
	while (i < argc)
	{
		y = 0;
		strlen = ft_strlen(argv[i]);
		while (y < strlen)
		{	
			c = argv[i][y];
			write(1, &c, 1);
			y++ ;
		}
		write(1, "\n", 1);
		i++;
	}	
}
