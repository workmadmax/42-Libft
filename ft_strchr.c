/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:33:05 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/26 10:49:56 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    A função procura a primeira ocorrência do caractere c(unsigned char)
    na string apontada pelo argumento str.
*/

#include <unistd.h>

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

#include <stdio.h>

int main()
{
    char    s1[50] = "canabumbla";
    char    s2[50] = "palmeiras";
    char    s3[50] = "balao";
    char    *a, *b, *c;

    a = ft_strchr(s1, '\0');
    b = ft_strchr(s2, 'i');
    c = ft_strchr(s3, 'l');

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    
}
