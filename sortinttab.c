#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	counter2;
	int	*curint;

	counter = 0;
	while (counter < size)
	{
		*curint = tab[counter];
		counter2 = counter;
		while (counter2 < size - 1)
		{
			counter2++;
			if (tab[counter2] < *curint)
				curint = &tab[counter2];
		}
		ft_swap(&tab[counter], curint)
		counter2++;
	}
}

int main(void)
{
	int tab[10] = {2, 4, 6, 8, 9, 0, 7, 5, 3, 1};
	ft_sort_int_tab(tab, 10);
	if (tab[2] == 2)
		write(1, "Success\n", 8);
	return 0;
}