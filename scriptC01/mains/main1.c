#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    int nbr = 2;
    int *nbr0 = &nbr;
    int **nbr1 = &nbr0;
    int ***nbr2 = &nbr1;
    int ****nbr3 = &nbr2;
    int *****nbr4 = &nbr3;
    int ******nbr5 = &nbr4;
    int *******nbr6 = &nbr5;
    int ********nbr7 = &nbr6;

    ft_ultimate_ft(&nbr7);
    printf("%d", nbr);
}