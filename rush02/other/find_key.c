#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int	number;
	char	*name;
}t_key_value;

int	get_nbytes(int fd,char array_buff)
{
	int	nr_bytes;
	size_t bytes;

	ssize_t bytes_read;
	nr_bytes = 0;
	while (read(fd, array_buff, ))
		nr_bytes++;
	printf("get_nbytes: %d\n", nr_bytes);
	return(nr_bytes);
}

int get_lines(char *str, int nr_bytes)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while(i < nr_bytes)
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

int	open_file(char *path)
{
	int	fd;
	ssize_t nr_bytes;
	int	nr_lines;
	char	array_buf[60000];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
	}
	else
	{
		nr_bytes = get_nbytes(fd, array_buff);
		printf("nr_bytes: %zi\n", nr_bytes);

		//nr_bytes = 691; //total file bytes 
		//array_buf = (char*)malloc((size_t)nr_bytes + 1); 
		read(fd, array_buf, nr_bytes);
		close(fd);
		if (nr_bytes == 0)
		{
			write(1, "Empty file", 10);	
		}
		else
		{
			printf("Bytes number: %zd - Content:\n%s\n", nr_bytes, array_buf);
			
			nr_lines = get_lines(array_buf, nr_bytes);
			printf("Counter: %i\n", nr_lines);
		}
	}
	return (fd);
}

int	main(void)
{
	char	*path;
	int fd;

	path = "./numbers.dict";
	fd = open_file(path);
	return (0);
}