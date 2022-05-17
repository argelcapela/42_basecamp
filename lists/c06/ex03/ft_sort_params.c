#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	show(int argc, char **argv);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				aux = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = aux;
			}
			j++;
		}
		j = 1;
		i++;
	}
	show(argc, argv);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	show(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
