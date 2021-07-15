#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

void	open_file(char **argv);

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

int	main(int	argc, char **argv)
{
	if (argc < 2) //mínimo dos argumentos
		write(1, "Reading Erorr\n", 6);
	else
	{
		open_file(argv);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	numb_bytes(char **argv)
{
	int		bytes;
	char	buf;
	int		fd;

	fd = open(argv[1], O_RDONLY); //Abrimos el archivo con permiso solo lectura
	bytes = 0;
	while (read(fd, &buf, 1))
		bytes++;
	close(fd); //Cerramos el archivo
	return (bytes);
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

int	len_first_line(char *buf)
{
	int	len;

	len = 0;
	while (buf[len] != '\n')
	{
		len++;
		if (buf[len] == '\n')
			return (len);
	}
	return (0);
}

char	get_emptier(char *buf, struct s_noseganaperosegosa keys)
{
	return (buf[keys.len_fl - 3]);
}

char	get_blocker(char *buf, struct s_noseganaperosegosa keys)
{
	return (buf[keys.len_fl - 2]);
}

char	get_filler(char *buf, struct s_noseganaperosegosa keys)
{
	return (buf[keys.len_fl - 1]);
}

struct s_noseganaperosegosa	get_blocker_cord(char *buf, struct s_noseganaperosegosa keys)
{
	int		i;
	int		c_r;
	int		c_c;
	int		c_b;

	c_r = 0;
	c_c = 0;
	c_b = 0;
	i = keys.len_fl + 1; //para que empiece en en \n de la primera linea
	while (buf[i])
	{	
		if (buf[i] == '\n')
		{
			c_r++;
		}
		else if (buf[i] != '\n')
		{
			c_c++;
		}
		if (buf[i + 1] == '\n')
		{
			c_c = 0;
		}
		if (buf[i] == keys.blocker)
		{
			keys.blocker_coord[c_b][0] = c_r; //coordenadas en col
			keys.blocker_coord[c_b][1] = c_c; //coordenadas en row
			c_b++;
		}
		i++;
	}
	return (keys);
}

struct s_noseganaperosegosa get_structure(char *buf, struct s_noseganaperosegosa keys)
{
	int	i;
	int	semaforo; //como booleanos
	char	*a;

	i = 0;
	a = "a";
	semaforo = 0; //False (0)
	keys.row = 0;
	keys.col = 0;
	keys.blocker_count = 0;
	//keys.row = ft_atoi(buf); //Meter atoi
	keys.len_fl = len_first_line(buf);
	keys.emptier = get_emptier(buf, keys);
	keys.blocker = get_blocker(buf, keys);
	keys.filler = get_filler(buf, keys);
	while (i < (keys.len_fl - 3))
	{
		a[i] = buf[i];
		i++;
	}
	keys.row = atoi(a);
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
					y_Count + 1 == keys.blocker_coord[i][1])
				{
					ft_putchar(keys.blocker);
					i++;
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

/*Abrimos y leemos el archivo*/
void	open_file(char **argv)
{
	int	fd;
	int	nr_bytes;
	char	*buf;
	struct s_noseganaperosegosa	keys;

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
		print_matrix(get_structure(buf, keys)); //Creamos la estructura
	}
	close(fd); //Cerramos el archivo
}
