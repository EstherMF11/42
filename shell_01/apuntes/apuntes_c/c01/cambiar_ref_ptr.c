#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*ptr;

	a = 56;
	ptr = &a;
	printf("%p - Dirección del puntero -> (a)\n", ptr);
	printf("%p - Dirección del puntero + 1int(4byte) -> (a + 4bytes)\n", ptr + 1);
	printf("%p - Dirección del puntero + 2int(8byte) -> (a + 8bytes)\n", ptr + 2);
	printf("------------------------------------------------------\n");
	printf("%p - Dirección del puntero a\n", ptr);
	printf("%p - Dirección del puntero b (+4byte)\n", &b);
	printf("%p - Dirección del puntero a + 1int(4byte)\n", ptr + 1);
	return (0);
}
