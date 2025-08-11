#include <unistd.h>

void	put_commas(int nb1, int nb2)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = (nb1 / 10 + '0');
	n2 = (nb1 % 10 + '0');
	n3 = (nb2 / 10 + '0');
	n4 = (nb2 % 10 + '0');
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			put_commas(first, second);
			second++;
		}
		first++;
	}
}
