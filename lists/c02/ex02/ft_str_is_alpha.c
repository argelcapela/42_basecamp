int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'a' && str[i] <= 'z')
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
