#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(size * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
