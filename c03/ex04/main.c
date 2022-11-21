#include	<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "fantasmita";
	char	to_find[] = "mita";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}	
