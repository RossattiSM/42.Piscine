#include	<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[6] = {0, 1, 2, 3, 4, 5};
	printf ("El array original es %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	ft_rev_int_tab(arr, 6);
	printf ("El array del reves es %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	return (0);
	}
