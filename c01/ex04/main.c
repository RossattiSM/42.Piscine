#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 10;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	printf ("%d\n", n1);
	printf ("%d\n", n2);
	return (0);
}	
