#include    <stdio.h>

char    *ft_strcat(char *dest, char *src);

int main(void)
{
    char    src[] = " por casualidad";
    char    dest[] = "Se cruzaron los dos caminos";
    
    printf ("\nstring con ft_strcat: %s\n\n", ft_strcat (dest, src));
	return (0);
}
