#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//OPEN: int open(const char *pathname, int flag);
//READ: ssize_t read(int fd, void *buf, size_t count);
//CLOSE: int close(int fd);

typedef struct{
	int number;
	char name;
}t_value_key;


int main (void)
{
	int fd; //file descriptor
	char buf; //se guardan los caracteres leidos (como max 10bytes)
	char *array_buf;
	ssize_t nr_bytes;
	int	i;
	int c;
	int prueba;
	char	*path;

	t_value_key *dic;

	path = "./numbers.dict";
	fd = open(path, O_RDONLY);

	if (fd == -1)
	{
		printf("Error opening file\n");
	}
	else
	{
		nr_bytes = 0;
		while (read(fd, &buf, 1))
		{
			nr_bytes++;
		}
	
		printf("Bytes after loop: %zd \n", nr_bytes);
		//nr_bytes = 691; //Valor bueno
		//nr_bytes = 687;
		array_buf = (char*)malloc(nr_bytes + 1);

		read(fd, array_buf, nr_bytes);
		close(fd);
		
		if (nr_bytes == 0)
		{
			printf("Empty file\n");
		}
		else
		{
			//lines counter
			int counter;

			counter = 0;
			i = 0;
			while(i < nr_bytes)
			{
				if (array_buf[i] == '\n')
					counter++;
				i++;
			}
			printf("Counter: %i\n", counter);
			printf("%s\n", array_buf);
			
			//printf("Bytes number: %zd - Content:\n%s\n", nr_bytes, array_buf);
			//printf("==========================================================\n");
			i = 0;
			if (array_buf[0] == '0')
				printf("%c", array_buf[0]);
			while (array_buf[i])
			{
				if (array_buf[i] == '\n')
				{
					while (array_buf[i] != ':')
					{
						printf("%c", array_buf[i]);
						dic[i].number = array_buf[i];
						i++;
					}
				}
				i++;
			}
		}
	}
	
	return (0);
}
