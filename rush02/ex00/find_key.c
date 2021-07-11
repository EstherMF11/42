#include <fcntl.h>
#include <unistd.h>

void	find_key(char *nb)
{
	size_t	nbytes;
	size_t	bytes_read;
	int		fd;
	int		i;
	char	buf[60000];

	fd = open("./numbers.dict", O_RDONLY);
	nbytes = sizeof(buf);
	bytes_read = read(fd, buf, nbytes);
	i = 0;
	while (i != sizeof(buf) && buf[i])
	{
		if (buf[i] == nb[0])
		{
			i++;
			if (buf[i] == ':')
				while (buf[++i] != '\n')
					write(1, &buf[i], 1);
		}
		else
			i ++;
	}
}
