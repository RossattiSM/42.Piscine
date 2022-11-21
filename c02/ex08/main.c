#include    <stdio.h>

int	ft_strlowcase(char *str);

int	main(void)
{
	char	low[] = "abcde";
    char    upp[] = "ABCD";
	char	lowupp[] = "asdasdABC";

    printf("\nstrlowcase convierte upper en lower\n");
    printf("\nantes: %s | ", low);
    ft_strlowcase(low);
    printf("ahora: %s\n\n", low);
    printf("antes: %s | ", upp);
    ft_strlowcase(upp);
    printf("ahora: %s\n\n", upp);
    printf("antes: %s | ", lowupp);
    ft_strlowcase(lowupp);
    printf("ahora: %s\n\n", lowupp);
	return(0);
}
