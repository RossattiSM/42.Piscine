#include	<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "abcdeFG";
	char	num[] = "123";
	char	emp[] = "";
	char	aspnum[] = "ls d432";
	char	special[] = "@'ñcal";
	
	printf("es %d porque tiene alfabeticos\n", ft_str_is_numeric(a));
	printf("es %d porque tiene numéricos\n", ft_str_is_numeric(num));
	printf("es %d porque no tiene nada\n", ft_str_is_numeric(emp));
	printf("es %d porque tiene numeros y espacios\n", ft_str_is_numeric(aspnum));
	printf("es %d porque tiene caracteres especiales\n", ft_str_is_numeric(special));
	return (0);
}
