#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include "structure.c"

void						open_file(char **argv);
void						ft_putchar(char c);
int							numb_bytes(char **argv);
int							ft_atoi(char *src);
int							len_first_line(char *buf);
char						get_emptier(char *buf, struct s_noseganaperosegosa keys);
char						get_blocker(char *buf, struct s_noseganaperosegosa keys);
char						get_filler(char *buf, struct s_noseganaperosegosa keys);
struct s_noseganaperosegosa	get_blocker_cord(char *buf, struct s_noseganaperosegosa keys);

#endif