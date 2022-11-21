#include	<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("\nstrcapitalize hace mayuscula la 1er letra de cada palabra y la 1er letra luego de caracteres especiales\n");
	printf("pero no lo hace cuando antes tiene nros\n\n");
	printf("original: %s\n", str);
	ft_strcapitalize(str);
	printf("nueva: %s\n\n", str);
	return (0);
}