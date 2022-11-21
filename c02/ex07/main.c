#include    <stdio.h>

int	ft_strupcase(char *str);

int	main(void)
{
	char	low[] = "abcde";
    char    upp[] = "ABCD";
	char	lowupp[] = "asdasdABC";

    printf("\nstrupcase convierte lower en upper\n");
    printf("\nantes: %s | ", low);
    ft_strupcase(low);
    printf("ahora: %s\n\n", low);
    printf("antes: %s | ", upp);
    ft_strupcase(upp);
    printf("ahora: %s\n\n", upp);
    printf("antes: %s | ", lowupp);
    ft_strupcase(lowupp);
    printf("ahora: %s\n\n", lowupp);
	return(0);
}