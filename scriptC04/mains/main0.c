#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main()
{
	char str[] = "stringa";
	printf("\n(strlen) ESERCIZIO 0:\n");
	printf("should output 7: --> %d <--\n", ft_strlen(str));
}