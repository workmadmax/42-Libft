#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

char        *get_next_line(int fd);
char        *get_read(int fd, char *str);
char        *get_string(char *str);
size_t      ft_strlen(char *str);
char        *ft_strchr(char *str, int c);
char        *gnl_strjoin(char *s1, char *s2);
size_t      ft_strlcpy(char *dest, char *src, size_t size);
char        *gnl_dup(char *s);

# endif