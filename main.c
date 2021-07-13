//#include "get_next_line.c"
//#include "get_next_line_utils.c"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    char *s;
    int fd = open("test", O_RDONLY);

    s = get_next_line(fd);
    printf("%s\n", s);
    s = get_next_line(fd);
    printf("%s\n", s);
    s = get_next_line(fd);
    printf("%s\n", s);
    s = get_next_line(fd);
    printf("%s\n", s);
    s = get_next_line(fd);
    printf("%s\n", s);
    s = get_next_line(fd);
    printf("%s\n", s);
    return (0);
}