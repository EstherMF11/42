/*#include <stdio.h>

int	ft_atoi(char *src);

int	main(void)
{
	int	val;
	int	val1;
	char	str[20] = " ---+--+1234ab567";
	char	str1[10] =  "903849";

	val = ft_atoi(str);
	printf("str = %d\n", val);
	val1 = ft_atoi(str1);
	printf("str1 = %d\nstr*2 = %d", val1, val1*2);

	return (0);

}*/

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
