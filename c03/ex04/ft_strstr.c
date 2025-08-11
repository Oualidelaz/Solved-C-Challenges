int	is_find(char *str, char *to_find, int index)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[index] != to_find[i])
			return (0);
		i++;
		index++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (is_find(str, to_find, i))
				return (str + i);
		}
		i++;
	}
	return (0);
}
