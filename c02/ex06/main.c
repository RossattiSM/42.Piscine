#include	<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	emp[] = "";
	char	print[] = "ls d432";
	char	nonprint[] = "\t";
    char	mixed[] = "\tasdasd";
	
	printf("es %d porque no tiene nada\n", ft_str_is_printable(emp));
	printf("es %d porque tiene caracteres imprimibles\n", ft_str_is_printable(print));
	printf("es %d porque tiene caracteres no imprimibles\n", ft_str_is_printable(nonprint));
    printf("es %d porque tiene caracteres no imprimibles e imprimibles juntos\n", ft_str_is_printable(mixed));
	return (0);
}