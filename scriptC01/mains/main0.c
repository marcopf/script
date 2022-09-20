#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
    int i;
    i = 34;
    ft_ft(&i);
    printf("%d", i);
}