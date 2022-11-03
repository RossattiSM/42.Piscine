#include	<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[5] = {56, 12, 26, 3, 0};
	printf ("el array desordenado es %d %d %d %d %d\n", arr[0], arr [1], arr[2], arr[3], arr[4]);
	ft_sort_int_tab(arr, 5);
	printf ("el array ordenado de menor a mayor es %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (0);
}
