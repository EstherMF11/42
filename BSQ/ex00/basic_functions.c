#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *src)
{
	int	i;
	int	result;
	int	signe;

	i = 0;
	result = 0;
	signe = 1;
	while (src[i] == ' ' || src[i] == '\f' || src[i] == '\t' || src[i] == '\v'
		|| src[i] == '\r' || src[i] == '\n')
		i++;
	while (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (src[i] >= 48 && src[i] <= 57)
	{
		result = result * 10 + (src[i] - 48);
		i++;
	}
	return (result * signe);
}
