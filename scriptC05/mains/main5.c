#include <stdio.h>

int	ft_sqrt(int nb);

int main()
{
	printf("\n(sqrt) ESERCIZIO 5:\n\n");
	printf("should output 4: %d\n", ft_sqrt(16));
	printf("should output 0: %d\n", ft_sqrt(17));
	printf("should output 1254: %d\n", ft_sqrt(1572516));
    printf("should output 0: %d\n", ft_sqrt(-16));
}
