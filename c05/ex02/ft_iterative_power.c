int	ft_iterative_power(int nb, int p)
{
	int	res;

	res = nb;
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (p == 1)
		return (nb);
	while (p > 1)
	{
		res = res * nb;
		p--;
	}
	return (res);
}
