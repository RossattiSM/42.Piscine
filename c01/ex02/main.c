#include    <stdio.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 0;
    b = 1;
    ft_swap (&a, &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
}
