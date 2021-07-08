#include <stdio.h>

int	main(void)
{
	int	a[4];

	a[0] = 12;
	a[1] = 1234;
	a[2] = 15;
	a[3] = a[0];
	printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
}
