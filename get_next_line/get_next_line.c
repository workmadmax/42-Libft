/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:54:42 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/19 21:27:56 by mdouglas         ###   ########.fr       */
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
    while (!ft_strchr(s, '\n') && i != 0)
    {
        i = read(fd, str, BUFFER_SIZE);
        if (i == -1);
        {
            free(str);
            return (NULL);
        }
        s_temp[i] = '\0';
        str = ft_strjoin(str, s_temp);
    }
    free(s_temp);
    return (str);
}

/*
    ft_strjoin() só que dando free na string 1
*/

char    *free_strjoin(char *s1, char *s2)
{
    char    *s_temp;

    if (!s1)
    {
        s1 = (char *)malloc(sizeof(char));
        *s1 = '\0';
    }
    s_temp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!s2 || !s_temp)
        return (NULL);
    while (s1[i] != '\0')
        s_temp++ = s1++;
    while (*s2)
        s_temp++ = s2++;
    free(s1);
    return (s_temp);
}

int main()
{
    int     fd;
    char    *str;

    fd = open("teste", O_RDONLY);
    str = malloc(sizeof(char ) * BUFFER_SIZE);
    read(fd, str, BUFFER_SIZE);
    printf(" Printando o 'buffer'%ld\n", read(fd, str, BUFFER_SIZE));
    printf(" Printando a 'string' : \n%s\n", str);
    free(str);
}