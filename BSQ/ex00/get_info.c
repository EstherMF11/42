#include <stdio.h>

int	len_first_line(char *buf)
{
	int	len;

	len = 0;
	while (buf[len])
		len++;
	return(len);
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
		if (buf[i] != '\n')
		{
			c_c++;
		}
		if (buf[i + 1] == '\n')
		{
			c_c = 0;
		}
		if (buf[i] == keys.blocker)
		{
			keys.blocker_coord[c_b][0] = c_c; //coordenadas en col
			keys.blocker_coord[c_b][1] = c_r; //coordenadas en row
			c_b++;
			printf("%d: %d,%d\n", c_b, c_r, c_c);
		}
		i++;
	}
	i = 0;
	while (i < 8)
	{
		printf("%d %d\n", keys.blocker_coord[i][0], keys.blocker_coord[c_b][1]);
		i++;
	}
	return (keys);
}
