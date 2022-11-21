#include    <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char    src[] = " estuvo aquí";
    char    dest[] = "Silvina";

    printf("%s", ft_strncat (dest, src, 4));
    return (0);
}
