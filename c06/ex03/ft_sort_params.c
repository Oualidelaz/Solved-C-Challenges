#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

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

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		first;
	int		second;
	char	*tmp;

	first = 1;
	while (first < argc - 1)
	{
		second = first + 1;
		while (second < argc)
		{
			if (ft_strcmp(argv[first], argv[second]) > 0)
			{
				tmp = argv[first];
				argv[first] = argv[second];
				argv[second] = tmp;
			}
			second++;
		}
		first++;
	}
	ft_print_params(argc, argv);
	return (0);
}
