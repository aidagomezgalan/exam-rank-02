#include <stdio.h>
#include <stdlib.h>

// Algoritmo de Euclides
int	pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (pgcd(b, a % b));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
