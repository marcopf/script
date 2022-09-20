#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	printf("\n(strncat) ESERCIZIO 3:\n");
	char s1[] = "piano", s2[] = "forte";
	printf("source: 	--> %s <--\n", s2);
	printf("destination: 	--> %s <--\n", s1);
	printf("concatenation (2): 	--> %s <--\n", ft_strncat(s1, s2, 2));
}