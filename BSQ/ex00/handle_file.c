#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void						ft_putchar(char c);
int							numb_bytes(char **argv);
int							ft_atoi(char *src);
int							len_first_line(char *buf);
char						get_emptier(char *buf, struct s_noseganaperosegosa keys);
char						get_blocker(char *buf, struct s_noseganaperosegosa keys);
char						get_filler(char *buf, struct s_noseganaperosegosa keys);
struct s_noseganaperosegosa	get_blocker_cord(char *buf, struct s_noseganaperosegosa keys);
struct s_noseganaperosegosa	get_blocker_cord(char *buf, struct s_noseganaperosegosa keys);

struct s_noseganaperosegosa
{
	int			row;
	int			col;
	int			len_fl;
	int			blocker_count;
	int			blocker_coord[1000][2];
	char		emptier;
	char		blocker;
	char		filler;
};

struct s_noseganaperosegosa get_structure(char *buf, struct s_noseganaperosegosa keys)
{
	int	i;
	int	semaforo; //como booleanos

	i = 0;
	semaforo = 0; //False (0)
	keys.row = 0;
	keys.col = 0;
	keys.blocker_count = 0;
	//keys.row = ft_atoi(buf); //Meter atoi
	keys.len_fl = len_first_line(buf);
	keys.emptier = get_emptier(buf, keys);
	keys.blocker = get_blocker(buf, keys);
	keys.filler = get_filler(buf, keys);
	int	a;
	while (i < (keys.len_fl - 3))
	{
		a = buf[i];
		i++;
	}
	keys.row = a - 48;
	while (buf[i])
	{
		if ((semaforo == 1 || semaforo == 2) && (buf[i] == keys.blocker))
			keys.blocker_count++;
		if (semaforo && buf[i] == '\n')
			semaforo = 2;
		if (semaforo == 1)  //semaforos de activacion del salto de linea
			keys.col++;
		else if (!semaforo && buf[i] == '\n')
			semaforo = 1; //activamos el semaforo a True
		i++;
	}
	keys = get_blocker_cord(buf, keys); //Llamo a mi estructura para completarla
	return (keys);
}

void print_matrix(struct s_noseganaperosegosa keys)
{
	int		x_Count;
	int		y_Count;
	int		i;

	x_Count = 0;
	y_Count = 0;
	i = 0;
	printf("Column: %d\nRow: %d\nEmptier: %c\nBlocker: %c\nFiller: %c\nBlockers count: %d\nLen first line: %d\n",
		keys.col, keys.row, keys.emptier, keys.blocker, keys.filler, keys.blocker_count, keys.len_fl);
	while (i < keys.blocker_count)
	{
		while (x_Count < keys.row)
		{
			while (y_Count < keys.col)
			{
				if (x_Count == keys.blocker_coord[i][0] &&
					y_Count == keys.blocker_coord[i][1])
				{
					ft_putchar(keys.blocker);
				}
				else
					ft_putchar(keys.emptier);
				y_Count++;
			}
			y_Count = 0;
			x_Count++;
			ft_putchar('\n');
		}
		i++;
	}
}

void	open_file(char **argv)
{
	int	fd;
	int	nr_bytes;
	char	*buf;
	struct s_noseganaperosegosa	keys;
	int	i;

	nr_bytes = numb_bytes(argv);
	buf = (char *) malloc(sizeof(char) * nr_bytes + 1);
	fd = open(argv[1], O_RDONLY);
	read(fd, buf, nr_bytes); //Leemos el archivo con un número de bytes asignado por nosotros
	if (nr_bytes == 0)
		write(1, "Empty file\n", 11);
	else
	{
		printf("OPEN AND READ FILE:\n");
		printf("Bytes number: %d - Content:\n%s\n", nr_bytes, buf);
		printf("---------------------------------\n");
		printf("EXTRACTED INFO FROM EXAMPLE_FILE:\n");
		printf("MATRIX\n");
		print_matrix(get_structure(buf, keys)); //Creamos la estructura
	}
	close(fd); //Cerramos el archivo
}
