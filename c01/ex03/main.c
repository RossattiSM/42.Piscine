#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	divres;
	int	modres;

	a = 100;
	b = 3;
	ft_div_mod (a, b, &divres, &modres);
	printf ("%d\n", divres);
	printf ("%d\n", modres);
	return (0);
}
