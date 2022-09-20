#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	printf("\n(strcmp) ESERCIZIO 0:\n");
	char s1[] = "ciao", s2[] = "ciao";
	char s3[] = "1iao", s4[] = "ciao";
	char s5[] = "ciao", s6[] = "1iao";
	printf("need to be 0: 		--> %d <--\n", ft_strcmp(s1, s2));
	printf("need to be negative: --> %d <--\n", ft_strcmp(s3, s4));
	printf("need to be positive: --> %d <--\n", ft_strcmp(s5, s6));
}