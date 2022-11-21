#include	<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	low[] = "abcde";
    char    upp[] = "ABCD";
	char	num[] = "123";
	char	emp[] = "";
	char	aspnum[] = "ls d432";
	char	special[] = "@'ñcal";
	
	printf("es %d porque tiene minusculas\n", ft_str_is_lowercase(low));
    printf("es %d porque tiene mayusculas\n", ft_str_is_lowercase(upp));
	printf("es %d porque tiene numéricos\n", ft_str_is_lowercase(num));
	printf("es %d porque no tiene nada\n", ft_str_is_lowercase(emp));
	printf("es %d porque tiene letras, numeros y espacios\n", ft_str_is_lowercase(aspnum));
	printf("es %d porque tiene caracteres especiales\n", ft_str_is_lowercase(special));
	return (0);
}