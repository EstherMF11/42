#include <stdio.h>

int	main(void)
{
	int	a;

	a = 42;
	switch(a)
	{
		case 41:
			printf("Hello\n");
			break;
		case 42:
			printf("World\n");
			break;
		case42:
			printf("This is\n");
			break;
		default:
			printf("Awesome\n");
			break;
	}
}
