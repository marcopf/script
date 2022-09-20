#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main()
{
	printf("\n(recursive power) ESERCIZIO 3:\n\n");
	printf("should output 1: %d\n", ft_recursive_power(4, 0));
	printf("should output 0: %d\n", ft_recursive_power(4, -2));
	printf("should output 1: %d\n", ft_recursive_power(0, 0));
	printf("should output 81: %d\n", ft_recursive_power(9, 2));
    printf("should output -64: %d\n", ft_recursive_power(-4, 3));
}
