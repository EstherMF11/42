#include "structure.c"

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
