#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, char c)
{
	char	*r;

	r = (char *)s;
	if (!c)
		return (&r[ft_strlen(r)]);
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}

char	*merge(char *ln1, char *ln2)
{
	char	*res;
	int		i;
	int		j;

	res = (char *)malloc(ft_strlen(ln1) + ft_strlen(ln2) + 1);
	i = 0;
	j = 0;
	while (ln1[i] != 0 && ln1[i] != '\n')
	{
		res[i] = ln1[i];
		i++;
	}
	while (ln2[j] != 0 && ln2[j] != '\n')
	{
		res[i + j] = ln2[j];
		j++;
	}
	res[i + j] = 0;
	return(res);
}
