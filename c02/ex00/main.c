#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "los";
	char	src[] = "arrays de arrays";

	printf ("\nstrcpy copia una cadena original dentro de otra nueva\n\n");
	printf ("la cadena original es %s\n", src);
	ft_strcpy (dest, src);
	printf ("la cadena nueva es %s\n\n", dest);
	return (0);
}
