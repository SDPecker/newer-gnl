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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)dst;
	p = (unsigned char *)src;
	if (r > p)
	{
		while (len > 0)
		{
			r[len - 1] = p[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			r[i] = p[i];
			i++;
		}
	}
	return (dst);
}

char	*merge(char *ln1, char *ln2)
{
	char	*res;

	res = (char *)malloc(ft_strlen(ln1) + ft_strlen(ln2) + 1);
	ft_memmove(res, ln1, ft_strlen(ln1));
	ft_memmove(res + ft_strlen(ln1), ln2, ft_strlen(ln2));
	res[ft_strlen(ln1) + ft_strlen(ln2)] = 0;
	return (res);
}