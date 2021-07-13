#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nbr, char *base);

int main(void)
{
	int nbr;
	char	*base;

	nbr = 8;
	base = "2";
	ft_putnbr(nbr, base);
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

void ft_putnbr(int nbr, char *base)
{
	int	digito;
	int	base_int;

	digito = 0;
	base_int = ft_atoi(base);
	while (nbr >= base_int)
	{
		digito = nbr % base_int;
		nbr = nbr / base_int;
		if (nbr < base_int)
			printf("Digito %d\n", nbr);
		else
		{
			printf("nbr %d - base %s\n", nbr, base);
			printf("Digito %d\n", digito);
		}
		printf("-------------------\n");
		ft_putnbr(nbr, base);
	}
}
