#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
struct s_noseganaperosegosa		handle_file(char *filename);
void				ft_putchar(char c);
void				print_matrix(struct s_noseganaperosegosa keys);

struct s_noseganaperosegosa
{
	int		rows;
	int		cols;
	int		blocker_coord[200][200];
	int		blocker_count;
	char	emptier;
	char	blocker;
	char	filler;
};

int	main(int	argc, char **argv)
{
	struct s_noseganaperosegosa		keys;

	if (argc < 2) //mínimo dos argumentos
		write(1, "Erorr\n", 6);
	else
	{
		print_matrix(handle_file(argv);
	}
	return (0);
}

struct s_noseganaperosegosa	set_metadata(char buf, struct s_noseganaperosegosa k)
{
	if (buf != '\n' && k.rows == 0)
		k.cols++;
	if (buf != '\n')
		k.new_col++;
	if (buf == '\n')
	{
		k.rows++;
		k.new_col = 0;
	}
	if (b == 'o')
	{
		k.obs_coords[k.obstacles][0] = k.rows;
		k.obs_coords[k.obstacles][1] = k.new_col;
		k.obstacles++;
	}
	return (k);
}

int	numb_bytes(char	**argv)
{
	int		bytes;
	int		fd;
	char	buf;

	bytes = 0;
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &buf, 1))
		bytes++;
	return (bytes);
}

struct s_noseganaperosegosa	handle_file(char **argv)
{
	int					fd;
	int					i;
	int					c;
	int					is_first_n;
	struct s_noseganaperosegosa		keys;
	char				*buf;

	keys.rows = 0;
	keys.cols = 0;
	keys.blocker = 0;
	fd = open(argv[1], O_RDONLY);
	i = -1;
	c = numb_bytes(&argv[1]);
	buf = (char *) malloc(sizeof(char) * c + 1);
	while ((++i) < read(fd, buf, c))
	{
		if (!is_first_n)
		{
			if (buf[i] >= '0' || buf[i] <= '9')
				keys.rows = keys.rows + buf[i];
			if ((buf[i] < '0' || buf[i] > '9') && !keys.emptier)
			{
				keys.emptier = buf[i];
				keys.blocker = buf[i + 1];
				keys.filler = buf[i + 2];
			}
		}
		if (is_first_n && buf[i + 1] != '\0')
			keys = set_metadata(buf[i], keys);
		if (buf[i] == '\n')
			is_first_n = 1;
	}
	close(fd);
	return (keys);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(struct s_noseganaperosegosa keys)
{
	int	x;
	int	y;
	int	i;

	x = -1;
	y = -1;
	i = -1;
	while (++i < keys.blocker_count)
	{
		while (++x <= keys.rows)
		{
			while (++y < keys.cols)
			{
				if (keys.blocker_coord[i][0] == x && keys.blocker_coord[i][1] == y + 1)
				{
					ft_putchar(keys.blocker);
					i++;
				}
				else
					ft_putchar(keys.emptier);
			}
			y = -1;
			ft_putchar('\n');
		}
	}
}

