int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++ ;
			continue ;
		}	
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
