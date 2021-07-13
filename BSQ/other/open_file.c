#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int nr_row(char *buf);
int nr_col(char *buf);
char	get_emptier(char *buf);
char	get_blocker(char *buf);
char	get_filler(char *buf);
int blockers_count(char *buf, char blocker, int row, int col);
void print_matrix(int col, int row, char emptier);
//void blocker_matrix(int col, int row, char *buf);
struct s_noseganaperosegosa get_structure(char *buf);

struct s_noseganaperosegosa
{
	int	row;
	int	col;
	char emptier;
	char blocker;
	char filler;
	int blocker_count;
	char blocker_coord[200][200];
};

/*Abrimos y leemos el archivo*/
void	open_file(char **argv)
{
	int	fd;
	int	nr_bytes;
	char	buf[60000];
	struct s_noseganaperosegosa	keys;
	int	row;
	int col;
	char emptier;
	char blocker;
	char filler;

	fd = open(argv[1], O_RDONLY); //Abrimos el archivo con permiso solo lectura
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
	}
	else
	{
		nr_bytes = sizeof(buf); 
		read(fd, buf, nr_bytes); //Leemos el archivo con un número de bytes asignado por nosotros
		close(fd); //Cerramos el archivo

		if (nr_bytes == 0)
			write(1, "Empty file\n", 11);
		else
		{
			get_structue(buf); //Creamos la estructura 
			row = nr_row(buf); //Numero de filas
			col = nr_col(buf); //Numero de columnas
			emptier = get_emptier(buf); //Caracter "vacio" 
			blocker = get_blocker(buf); //Caracter "obstaculo"
			filler = get_filler(buf); //Caracter "relleno"
			printf("OPEN AND READ FILE:\n");
			printf("Bytes number: %d - Content:\n%s\n", nr_bytes, buf);
			printf("---------------------------------\n");
			printf("EXTRACTED INFO FROM EXAMPLE_FILE:\n");
			printf("Rows number: %d\n", row);
			printf("Columns number: %d\n", col);
			printf("Emptier char: %c\n", emptier);
			printf("Blocker char: %c\n", blocker);
			printf("Filler char: %c\n", filler);
			printf("---------------------------------\n");
			printf("MATRIX:\n");
			blockers_count(buf, blocker, row, col); //Contador de caracteres obstaculo
			print_matrix(col, row, emptier); //Printeamos la matriz rowxcol
			//blocker_matrix(col, row, buf);
		}
	}
}

struct s_noseganaperosegosa get_structure(char *buf)
	int	i;

	keys.row = 0;
	keys.col = 0;
	keys.emptier = 0;
	keys.blocker = 0;
	keys.filler = 0;
	i = 0;
	if (buf[i] >= '0' || buf[i] <= '9')
		keys.row = buf[0];
	while (buf[col + 5] != '\n')
		keys.col++;
	printf("sssss ----> %d - %d", keys.row, keys.col);
}
