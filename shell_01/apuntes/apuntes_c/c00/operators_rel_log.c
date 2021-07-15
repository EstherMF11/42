#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 43;
	b = 1;
	printf("Operadores de Relacion:\n");
	printf("a >= b?: %d %d = %d\n", a, b, a >= b);
	printf("a <= b?: %d %d = %d\n", a, b, a <= b);
	printf("a == b?: %d %d = %d\n", a, b, a == b);
	printf("a != b?: %d %d = %d\n", a, b, a != b);
	printf("Operadores Logicos:\n");
	printf("(a != b) && (b != a)?: %d %d = %d\n", a, b, (a != b) && (b != a));
	printf("(a != b) || (b != a)?: %d %d = %d\n", a, b, (a != b) || (b != a));
}
