#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "holahola";
	char	dest[] = "adiosadios";

	printf ("\nstrcnpy copia la cantidad de c que le indiquemos de una cadena original dentro de otra nueva\n");
	printf ("y si la original es menor a la nueva, agrega nulos\n\n");
	printf ("la cadena original es %s\n", src);
	ft_strncpy (dest, src, 4);
	printf ("la nueva cadena es %s\n\n", dest);
	return (0);
}
