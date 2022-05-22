/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_util.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:34:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/21 13:43:45 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t    ft_strlen(char *str)
{
    size_t  i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strchr(char *str, int c)
{
    int     i;
    char    x;

    i = 0;
    x = (char)c;
    if (!str || c == '\0')
        return (NULL);
    while ((str[i] != x) && (str[i] != '\0'))
        i++;
    if (str[i] == x)
        return ((char *)(str + i));
    return (NULL);
}

/*
    ft_strjoin() só que dando free na string 1
*/

char    *free_strjoin(char *s1, char *s2)
{
    unsigned int    i;
    unsigned int    j;
    char            *str;

    i = 0;
    j = 0;
    if (!s1)
    {
        s1 = (char *)malloc(sizeof(char));
        *s1 = '\0';
    }
    str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!s1 || !str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
        str[i++] = s2[j++];
    str[i] = '\0';
    free(s1);
    return (str);
}

size_t  ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size > 0)
    {
        while (src[i] && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

char    *ft_strdup(char *s)
{
    char    *ret;
    size_t  size;
    
    size = ft_strlen(s) + 1;
    ret = (char *)malloc(size);
    if (ret == NULL)
        return (NULL);
    ft_strlcpy(ret, s, size);
    free(s);
    return (ret);
}