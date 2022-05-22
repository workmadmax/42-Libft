/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:54:42 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/21 13:43:47 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_string(char *str)
{
    char    *s_temp;
    int     i;

    i = 0;
    if(!str[i])
        return (NULL);
    while (str[i] && str[i] != '\n')
        i++;
    s_temp = (char *)malloc(sizeof(char) * (i + 2));
    if (!s_temp)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        s_temp[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
    {
        s_temp[i] = str[i];
        i++;
    }
    s_temp[i] = '\0';
    return (s_temp);
}

char    *get_read(int fd, char *str)
{
    char    *s_temp;
    int     i;
    
    s_temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!s_temp)
        return (NULL);
    i = 1;
    while (!ft_strchr(str, '\n') && i != 0)
    {
        i = read(fd, s_temp, BUFFER_SIZE);
        if (i == -1)
        {
            free(s_temp);
            return (NULL);
        }
        s_temp[i] = '\0';
        str = free_strjoin(str, s_temp);
    }
    free(s_temp);
    return (str);
}

char    *get_next_line(int fd)
{
    char        *str;
    static char *buf;
    
    if (fd < 0|| BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
        return (NULL);
    buf = get_read(fd, buf);
    if (!buf)
        return (NULL);
    str = get_string(buf);
    buf = ft_strdup(buf);
    return (str);
}

int main()
{
    int     fd;
    char    *line;

    fd = open("teste", O_RDONLY);
    printf(" Buffer > %d\n", BUFFER_SIZE);
    line = get_next_line(fd);
    printf(" Printando a linha %s\n", line);
    line = get_next_line(fd);
    printf("linha rmk > %s\n", line);
    free(line);
}