#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	static int	reader = -2;

	if (reader == -2)
	{
		buf = (char *)malloc(BUFFER_SIZE);
		reader = read(fd, buf, BUFFER_SIZE);
	}
}