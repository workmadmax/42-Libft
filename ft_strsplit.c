/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:15:45 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/24 11:34:10 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char **create_str(char **split, const char *s,
char c, size_t split_idx);

static size_t   total_str(char const *s, char sep);

static char *ft_strcpy(char *dst, char *start, size_t *len);

char **ft_split(const char *s, char c)
{
    char    **split;
    size_t  split_idx;
    
    if (!s)
        return (NULL);
    split = (char **)malloc(sizeof(char *) * (total_str(s, c) + 1));
    if (!split)
        return (NULL);
    split_idx = 0;
    split = create_str(split, s, c, split_idx);
    if (!split)
        return (NULL);
    return (split);
}

static size_t   total_str(char const *s, char sep)
{
    size_t  i;
    
    i = 0;
    if (!*s)
        return (i);
    if (!ft_strchr(s, sep))
        return (1);
    while (*s)
    {
        while (*s && *s == sep)
            s++;
        if (*s && *s != sep)
        {
            while (*s && *s != sep)
                s++;
            i++;
        }
    }
    return (i);
}

static char *ft_strcpy(char *dst, char *start, size_t *len)
{
    size_t  i;

    i = 0;
    while (i < *len)
    {
        *dst = start[i];
        i++;
        dst++;
    }
    *dst = '\0';
    *len = 0;
    return (dst);
}

static char **total_str(char **split, const char *s,
char c, size_t split_idx)
{
    char    *str_start;
    size_t  str_len;

    str_len = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s && *s != c)
        {
            str_start = (char *)s;
            while (*s && *s != c)
            {
                str_len++;
                s++;
            }
            split[split_idx] = (char *)malloc(sizeof(char) * (str_len + 1));
            if (!split[split_idx])
                return (NULL);
            ft_strcpy(split[split_idx++], str_start, &str_len);
        }
    }
    split[split_idx] = NULL;
    return (split);
}
