int	special(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

int	ft_str_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (special(str[i]))
			new_word = 1;
		else if (ft_str_is_lowercase(str[i]) && new_word == 1)
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else
			new_word = 0;
		i++;
	}
	return (str);
}
