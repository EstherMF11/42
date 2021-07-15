#include <unistd.h>
#include <stdio.h>

int	ft_is_repeated(char *str)
{
	int	i;
	int	first_index;
	int	second_index;
	int	is_repeated;

	i = 0;
	is_repeated = 0;
	first_index = 0;
	while (str[i] != '\0')
		i++;
	while (first_index <= i)
	{
		second_index = first_index + 1;
		while (second_index <= i)
		{
			if (str[first_index] == str[second_index])
				is_repeated = 1;
			second_index++;
		}
		first_index++;
	}
	return (is_repeated);
}

int	ft_error(char *str)
{
	int	error;
	int	i;

	i = 0;
	error = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			error = 1;
			return (error);
		}
		i++;
	}
	error = ft_is_repeated(str);
	return (error);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	error;

	nbr = 0;
	i = 0;
	error = ft_error(base);
	printf("%d\n", error);
	if ((base[0] != '\0' && base[1] != '\0') && (error == 0))
	{
		while (base[i] != '\0')
			i++;
		ft_convert(nbr, i);
	}
}

int main(void)
{
	int	a = 100;
	char	base[] = "aa";
	ft_putnbr_base(a, base);
}
