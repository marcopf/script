#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("\n(strncmp) ESERCIZIO 1:\n");
	char s1[] = "cia523", s2[] = "ciao";
	char s3[] = "1iao", s4[] = "ciao";
	char s5[] = "ciao", s6[] = "1iao";
	char s7[] = "cia523", s8[] = "ciao";
	printf("need to be negative: 	--> %d <--\n", ft_strncmp(s1, s2, 4));
	printf("need to be 0: 		--> %d <--\n", ft_strncmp(s7, s8, 3));
	printf("need to be negative: 	--> %d <--\n", ft_strncmp(s3, s4, 3));
	printf("need to be positive: 	--> %d <--\n", ft_strncmp(s5, s6, 3));
}