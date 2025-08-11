#include <unistd.h>

void	ft_putstr(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		write(1, &av[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
