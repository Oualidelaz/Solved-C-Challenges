void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	second;
	int	swp;

	first = 0;
	while (first < size)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[second] < tab[first])
			{
				swp = tab[first];
				tab[first] = tab[second];
				tab[second] = swp;
			}
			second++;
		}
		first++;
	}
}
