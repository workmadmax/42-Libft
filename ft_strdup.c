/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:04:59 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/26 11:44:33 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    A função é usada para duplicar uma string.
    Retorna um ponteiro para uma string de bytes terminada em nulo.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);

char    *ft_strdup(const char *s)
{
    char    *ret;
    size_t  size;
    
    size = ft_strlen(s) + 1;
    ret = (char *)malloc(size);
    if (ret == NULL)
        return (NULL);
    ft_strlcpy(ret, s, size);
    return (ret);
}

int main()
{
    char    src[] = "Palmeiras";
    char    s[] = "";
    char    *target, *t2;

    target = ft_strdup(src);
    t2 = ft_strdup(s);
    printf("%s\n", target);
    printf("%s\n", src);
    printf("%s\n", s);
    printf("%s\n", t2);
    return (0);
}

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
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
        dest[i] = 0;
    }
    while (src[i])
        i++;
    return (i);
}
