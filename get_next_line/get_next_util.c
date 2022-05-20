/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:34:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/19 21:38:51 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t    *ft_strlen(char *str)
{
    size_t  i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strchr(const char *str, int c)
{
    int     i;
    char    *s;

    i = 0;
    s = (char *)str;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    if (c == '\0')
        return (&s[i]);
    return (0);
}
