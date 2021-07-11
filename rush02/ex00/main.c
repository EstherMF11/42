#include <unistd.h>
char	*basic_dict(int	number);
/*char	*other_dict(int	number, char	*dict);*/
int		ft_atoi(char *src);

int	main(int	argc, char	**argv)
{
	if (argc == 2)
		basic_dict(ft_atoi(argv[1]));
	/*else if (argc == 3)
		other_dict(argv[1], argv[2]);*/
	else
		write (1, "Error\n", 6);
}
