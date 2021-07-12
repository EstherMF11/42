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

/*Abrimos y leemos el archivo*/
void	open_file(char **argv)
{
	int	fd;
	int	nr_bytes;
	char	buf[60000];
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
		}
	}
}