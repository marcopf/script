#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	printf("\n(next prime) ESERCIZIO 7:\n\n");
	printf("should output 89: %d\n", ft_find_next_prime(84));
	printf("should output 2147483647: %d\n", ft_find_next_prime(2147483644));
}
