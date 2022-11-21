#include    <stdio.h>
#include    <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
    char str[] = " ---+--+1234ab567";
    char str1[] = "1234ab567";

    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str1));
}