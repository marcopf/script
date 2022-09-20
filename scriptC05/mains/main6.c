#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	printf("\n(prime) ESERCIZIO 6:\n\n");
	printf("should output 0: %d\n", ft_is_prime(203958));
	printf("should output 0: %d\n", ft_is_prime(0));
	printf("should output 0: %d\n", ft_is_prime(1));
    printf("should output 0: %d\n", ft_is_prime(-1));
    printf("should output 1: %d\n", ft_is_prime(2));
	printf("should output 1: %d\n", ft_is_prime(2147483647));
}
