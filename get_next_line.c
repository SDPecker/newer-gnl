#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	static int	reader = -2;
	char		*result;
	
	result = (char *)malloc(1);
	result[0] = 0;

	if (reader == -2)
	{
		buf = (char *)malloc(BUFFER_SIZE);
		reader = read(fd, buf, BUFFER_SIZE);
	}
	
	while (ft_strchr(buf, '\n') != 0 && reader == BUFFER_SIZE)
	{
		result = merge(result, buf);
		reader = read(fd, buf, BUFFER_SIZE);
	}
	if (ft_strchr(buf, '\n') != 0)
	{
		result = merge(result, buf);
		buf = ft_strchr(buf, '\n') + 1;
		return (result);
	}
	if (reader < BUFFER_SIZE)
	{
		if (!reader)
			return (NULL);		
		result = merge(result, buf);
		reader = read(fd, buf, BUFFER_SIZE);
		return (result);
	}
}