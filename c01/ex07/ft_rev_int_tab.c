void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swp = tab[start];
		tab[start] = tab[end];
		tab[end] = swp;
		start++;
		end--;
	}
}
