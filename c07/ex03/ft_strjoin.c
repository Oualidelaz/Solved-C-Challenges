#include <stdlib.h>

int	ft_count_sep(char *sep)
{
	int	s;

	s = 0;
	if (sep[0] == '\0')
		return (0);
	while (sep[s])
		s++;
	return (s);
}

int	ft_count_strs(int size, char **strs)
{
	int	t;
	int	i;
	int	j;

	t = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		t += j;
		i++;
	}
	return (t);
}

void	append_str(char *arr, char *str, int *index)
{
	int	j;

	j = 0;
	while (str[j])
	{
		arr[*index] = str[j];
		(*index)++;
		j++;
	}
}

void	ft_process(int size, char *arr, char **strs, char *sep)
{
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (w < size)
	{
		append_str(arr, strs[w], &i);
		if (w < size - 1)
			append_str(arr, sep, &i);
		w++;
	}
	arr[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		total_len;
	int		c_strs;

	if (size == 0 || strs == NULL)
	{
		arr = malloc(sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	if (!sep)
		sep = "";
	c_strs = ft_count_strs(size, strs);
	total_len = c_strs + (ft_count_sep(sep) * (size - 1)) + 1;
	arr = malloc(total_len);
	if (!arr)
		return (NULL);
	ft_process(size, arr, strs, sep);
	return (arr);
}
