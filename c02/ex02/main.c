#include	<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a[] = "abcdeFG";
	char	num[] = "123";
	char	emp[] = "";
	char	aspnum[] = "ls d432";
	char	special[] = "@'ñcal";
	
	printf("es %d porque tiene alfabeticos\n", ft_str_is_alpha(a));
	printf("es %d porque tiene numéricos\n", ft_str_is_alpha(num));
	printf("es %d porque no tiene nada\n", ft_str_is_alpha(emp));
	printf("es %d porque tiene numeros y espacios\n", ft_str_is_alpha(aspnum));
	printf("es %d porque tiene caracteres especiales\n", ft_str_is_alpha(special));
	return (0);
}
