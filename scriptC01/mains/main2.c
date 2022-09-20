#include <stdio.h>
void ft_swap(int *a, int *b);

int main()
{
    int a;
    int b;

    a = 3;
    b = 5;
    printf("BEFORE: %d--%d\n", a, b);
    ft_swap(&a, &b);
    printf("AFTER: %d--%d\n", a, b);
}