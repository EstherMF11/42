#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
//OPEN: int open(const char *pathname, int flag);
//READ: ssize_t read(int fd, void *buf, size_t count);
//CLOSE: int close(int fd);

typedef	struct	s_key_value
{
	char			key[255];
	char			value[255];
}t_key_value;

void clear(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_create_key_value(t_key_value *dict, char *str)
{
	int	i;
	int	b;
	int	count_dict;
	char	*buffer;

	i = 0;
	b = 0;
	count_dict = 0;
	buffer = (char*)malloc(225);
	while (str[i] != '\0')
	{
		if (str[i] == ':' || str[i] == '\n')
		{
			buffer[i] = '\0';
			b = 0;
			if (str[i] == ':')
				ft_strcpy(dict[count_dict].key, buffer);
			if (str[i] == '\n')
				ft_strcpy(dict[count_dict].value, buffer);
			clear(buffer);
			i++;
			continue;
		}
		buffer[b++] = str[i++];
	}
}

int main (void)
{
	int fd; //file descriptor
	const int	max_buffer = 4500;
	char	f_dic[max_buffer];
	t_key_value	*dictionary;
	char	*path;
	int	var_nbr;

	path = "./numbers.dict";
	var_nbr = 1;
	
	dictionary = (t_key_value*)malloc(sizeof(t_key_value) * (count_char(f_dic, '\n') + 1));
	ft_create_key_value(dictionary, f_dic);

	return (0);
}