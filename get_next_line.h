#define BUFFER_SIZE 32
#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, char c);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
char	*merge(char *ln1, char *ln2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);