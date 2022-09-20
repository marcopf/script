#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

int main()
{
	int size = 3;
	int tab[3] = {7, 3, 6};
	int i = 0;

	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;

	ft_sort_int_tab(tab, size);
	printf("\n");

	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}