#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	printf("\n(iterative factorial) ESERCIZIO 0:\n\n");
	printf("should output 1: %d\n", ft_iterative_factorial(0));
	printf("should output 6: %d\n", ft_iterative_factorial(3));
	printf("should output 0: %d\n", ft_iterative_factorial(-2));
	printf("should output 720: %d\n", ft_iterative_factorial(6));
	printf("should output 362880: %d\n", ft_iterative_factorial(9));
}