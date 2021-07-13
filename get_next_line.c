#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf = 0;
	int			reader;
	char		*result;
	
	//Создаем пустую строку под возвращаемое значение
	result = (char *)malloc(1);
	result[0] = 0;
	//Первичный маллок буфера и запись в него
	if (!buf)
	{
		buf = (char *)malloc(BUFFER_SIZE);
		reader = read(fd, buf, BUFFER_SIZE);
		result = merge(result, buf);
	}

	while (ft_strchr(buf, '\n') == NULL)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		if (reader < BUFFER_SIZE)
		{
			if (reader == 0)
				return (NULL);
			result = merge(result, buf);
			return (result);
		}
		result = merge(result, buf);
	}
	if (ft_strchr(buf, '\n') != NULL)
	{
		buf = ft_strchr(buf, '\n') + 1;
		return (result);
	}
	return (NULL);
}