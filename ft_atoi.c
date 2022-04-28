/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:14:38 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/27 18:24:35 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_checkspace(char c)
{
    if (c == '\t'
        || c == '\v'
        || c == '\r'
        || c == '\n'
        || c == '\f'
        || c == ' ')
        return (1);
    return (0);
}

int ft_isdigit(int c);

int ft_atoi(const char *str)
{
    int neg;
    int res;

    neg = 0;
    res = 0;
    while (ft_checkspace(*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg = 1;
        str++;
    }
    while (ft_isdigit(*str))
        res = (res * 10) + (*str++ -48);
    if (neg)
        return (res * -1);
    return (res);
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

#include <stdio.h>

int main()
{
    char    *str, *str2, *str3;
    int     res, res2,res3;

    str = "2147483647";
    str2 = "-+214748364";
    str3 = "";
    res = ft_atoi(str);
    res2 = ft_atoi(str2);
    res3 = ft_atoi(str3);
    printf(" MAX INT : %d\n", res);
    printf(" MIN INT : %d\n", res2);
    printf(" MIN INT : %d\n", res3);
}