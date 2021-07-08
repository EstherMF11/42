#include <stdio.h>

int	main(void)
{
	char	*str;
	char	ptr[] = 'lol';

	str = "rol";
	ptr[0] = "p";
	printf("%c - %s\n", *str, str);
	return (0);
}
