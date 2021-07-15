#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 89;
	printf("Hello %d world %d\n", a, b);
	b = a;
	a = 2;
	printf("Hello %d world %d\n", a, b);
}
