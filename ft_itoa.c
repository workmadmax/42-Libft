/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:04:36 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:08:39 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static char *ft_converse(char *str, size_t size,
                        unsigned int num,
                        unsigned int neg)
{
    str[size] = '\0';
    while (size--)
    {
        str[size] = (num % 10) + 48;
        num /= 10;
    }
    if (neg)
        str[0] = '-';
    return (str);
}

size_t  ft_intlen(int n)
{
    size_t len;
    
    len = 1;
    if (n < 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    size_t          len_digit;
    unsigned int    neg;
    char            *str;

    len_digit = ft_intlen(n);
    neg = 0;
    if (n < 0)
    {
        neg = 1;
        n *= -1;
    }
    str = malloc(sizeof(char) * (len_digit + 1));
    if (str == NULL)
        return (NULL);
    return (ft_converse(str, len_digit, (unsigned int)n, neg));
}
