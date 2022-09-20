#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main()
{
	printf("\n(iterative power) ESERCIZIO 2:\n\n");
	printf("should output 1: %d\n", ft_iterative_power(4, 0));
	printf("should output 0: %d\n", ft_iterative_power(4, -2));
	printf("should output 1: %d\n", ft_iterative_power(0, 0));
	printf("should output 81: %d\n", ft_iterative_power(9, 2));
    printf("should output -64: %d\n", ft_iterative_power(-4, 3));
}
