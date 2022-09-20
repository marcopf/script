#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	printf("\nESERCIZIO 4: \n");
	char s1[] = "cia", s2[] = "iaooo";
	char s3[] = "ciaoo", s4[] = "iaooo";
	char s5[] = "ciao", s6[] = "";
	char s7[] = "ciao", s8[] = "";
	printf("should output NULL: %s\n", strstr(s1, s2));
	printf("should output NULL: %s\n", ft_strstr(s3, s4));
	printf("should output ciao: %s\n", strstr(s5, s6));
	printf("should output ciao: %s\n", ft_strstr(s7, s8));
}