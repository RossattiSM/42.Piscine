#include	<stdio.h>
#include    <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "aad";
    char	s2[] = "asd";
    char    s3[] = "aad";
    char    s4[] = "asd";
	
	printf ("\nvalor en la ft_strcmp: %d\n", ft_strcmp (s1, s2));
    printf ("valor en strcmp: %d\n\n", strcmp (s3, s4));
    printf ("strcmp compara ambos string c por c\n");
    printf ("devuelve la  != en ascii que tienen los primeros caracteres que encuentra distintos entre ambos string\n");
    printf ("si son iguales devuelve 0\n\n");
	return (0);
}
