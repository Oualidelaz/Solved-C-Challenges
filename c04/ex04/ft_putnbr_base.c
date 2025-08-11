#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_duplicate(char *base)
{
	int	first;
	int	second;

	first = 0;
	while (base[first])
	{
		second = first + 1;
		while (base[second])
		{
			if (base[first] == base[second])
				return (1);
			second++;
		}
		first++;
	}
	return (0);
}

int	is_valid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	if (is_duplicate(base))
		return (0);
	return (i);
}

void	converter(long int nbr, char *base, int len)
{
	if (nbr >= len)
		converter((nbr / len), base, len);
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	num;

	len = is_valid(base);
	if (len == 0)
		return ;
	num = (long int)(nbr);
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	converter(num, base, len);
}
