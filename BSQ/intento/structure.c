#ifndef FT_METADATA_H
#define FT_METADATA_H
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

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

#endif