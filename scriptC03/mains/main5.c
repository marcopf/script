#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);

int main()
{
	char s1[] = "ciao", s2[] = "testing";
	printf("\nESRCIZIO 5: \n");
	printf("should output 11: --> %u <--\n", ft_strlcat(s1, s2, 4));
}