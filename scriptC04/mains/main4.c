#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
	printf("\nESERCIZIO 4: \n");
	printf("\n <--- should output -101111: ");
	ft_putnbr_base(-47, "01");
	printf("\n <--- should output 1673: ");
	ft_putnbr_base(1673, "0123456789");
	printf("\n <--- should output vf: ");
	ft_putnbr_base(47, "poneyvif");
	printf("\n <--- should output E7D: ");
	ft_putnbr_base(3709, "0123456789ABCDEF");
}