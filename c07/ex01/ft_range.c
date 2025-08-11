#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	size = max - min;
	i = 0;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
