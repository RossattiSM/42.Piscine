#include	<stdio.h>
#include    <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "asd";
    char	s2[] = "aad";
    char    s3[] = "asd";
    char    s4[] = "aad";
	
	printf ("\nvalor en la ft_strncmp: %d\n", ft_strncmp (s1, s2, 1));
    printf ("valor en strcmp: %d\n\n", strncmp (s3, s4, 1));

    printf ("strncmp compara ambos string c por c y devuelve\n");
    printf ("la  != en ascii que tienen los 1ros c que encuentra distintos entre los string \n");
    printf ("pero segun el valor que le des a n, si son iguales devuelve 0\n\n");
	return (0);
}
