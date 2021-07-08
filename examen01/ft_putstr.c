#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "Hello";

	printf("Puntero: %p\n", &str);
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;
	int	z;;

	printf("Puntero: %p\n", &str);
	z = *str[0];
	i = 0;
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
	printf("\n");
	printf("Puntero: %p\n", &str);
	*str = z;
	printf("Puntero: %p\n", &str);
}	
