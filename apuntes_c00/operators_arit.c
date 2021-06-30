#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 10;
	printf("Operaciones:\n");
	printf("Valores: i = %d, j= %d\n", i, j);
	printf("Suma: %d + %d = %d\n", i, j, i + j);
	printf("Resta: %d - %d = %d\n", i, j, i - j);
	printf("Multiplicacion: %d * %d = %d\n", i, j, i * j);
	printf("Division: %d / %d = %d\n", i, j, i / j);
}
