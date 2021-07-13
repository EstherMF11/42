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