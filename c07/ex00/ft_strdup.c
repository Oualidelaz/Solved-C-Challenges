#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_l;
	int		i;
	char	*arr;

	i = 0;
	src_l = ft_strlen(src);
	arr = malloc(src_l + 1);
	if (!arr)
		return (NULL);
	while (i < src_l)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
