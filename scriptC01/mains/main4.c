#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int a;
    int b;

    a = 10;
    b = 3;
    printf("A: %d B: %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("DIV: %d MOD: %d\n", a, b);
}