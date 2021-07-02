#include <stdio.h>

int	main(void)
{
	int	a[2][2];

	a[0][0] = 12;
	a[1][0] = 1234;
	a[0][1] = 15;
	a[1][1] = a[0][0];
	printf("Values:\n");
	printf("%d %d %d %d\n", a[0][0], a[1][0], a[0][1], a[1][1]);
	printf("Matrix:\n");
	printf("%d %d\n %d %d", a[0][0], a[1][0], a[0][1], a[1][1]);
}
