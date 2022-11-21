#include	<stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[100] = "adiosss";
	char	dest2[100] = "adiosss";
    char	src[100] = "hola buenas buenas";
	unsigned int rt;
	unsigned int rt2;
	
	rt = strlcpy(dest2, src, 0);
	rt2 = ft_strlcpy(dest, src, 0);
	printf("\nstrlcpy copia un string dentro de otro string y retorna el tamaño\n\n");
	printf ("%d | %s\n\n", rt, dest2);
	printf ("%d | %s\n\n", rt2, dest);
	return (0);
}
