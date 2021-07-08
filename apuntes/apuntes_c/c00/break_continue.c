#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i ++;
	}
	printf("I am out\n");
	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		break ;
		i ++;
	}
	printf("I am out\n");
}
