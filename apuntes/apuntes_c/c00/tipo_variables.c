#include <stdio.h>

int	main(void)
{
	char	c;
	int		i;
	float	f;

	c = 'o';
	i = 9;
	f = 3.14;
	printf("Almacenamiento de los tipos de variables:\n");
	printf("Caracter: %lu, value: %c\n", sizeof(c), c);
	printf("Integer: size: %lu, value: %d\n", sizeof(i), i);
	printf("Float: size: %lu, value: %5.2f\n", sizeof(f), f);
}
