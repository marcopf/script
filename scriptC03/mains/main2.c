#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	printf("\n(strcat) ESERCIZIO 2:\n");
	char s1[] = "piano", s2[] = "forte";
	printf("source: 	--> %s <--\n", s2);
	printf("destination: 	--> %s <--\n", s1);
	printf("concatenation: 	--> %s <--\n", ft_strcat(s1, s2));
}