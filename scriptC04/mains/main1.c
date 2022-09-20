#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putstr(char *str);

int main()
{
	char str[] = "computer";
	printf("\n(putstr) ESERCIZIO 1:\n");
	printf(" <-- should output \"computer\"");
	ft_putstr(str);
}