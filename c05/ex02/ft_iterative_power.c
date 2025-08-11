int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power >= 1)
		{
			r *= nb;
			power--;
		}
	}
	return (r);
}
