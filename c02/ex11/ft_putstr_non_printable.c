#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	display_process(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[(unsigned char)c / 16], 1);
	write(1, &hex[(unsigned char)c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!(ft_str_is_printable(str[j])))
			display_process(str[j]);
		else
			write(1, &str[j], 1);
		j++;
	}
}
