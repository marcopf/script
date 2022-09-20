#include <stdio.h>

int	ft_fibonacci(int index);

int main()
{
	printf("\n(recursive fibonacci) ESERCIZIO 4:\n\n");
	printf("should output 10946: %d\n", ft_fibonacci(21));
	printf("should output 0: %d\n", ft_fibonacci(0));
    printf("should output -1: %d\n", ft_fibonacci(-1));
}
