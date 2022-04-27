/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:01:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/26 10:31:47 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
    A função copia o caractere 'c'(um unsigned char) para os primeiros 'n' caracteres
    da string apontada, pelo argumento 'str'.
    Retorna um ponteiro para a área de memória 'str'.
*/

void    *ft_memset(void *str, int c, size_t n)
{
    char        *aux;
    size_t      i;

    aux = (char *)str;
    i = 0;
    while (i < n)
    {
        aux[i] = c;
        i++;
    }
    return (str);
}

#include <stdio.h>

int main()
{
    char    s[50] = "palmeiras";
    char    s2[50] = "flango";
    char    s3[7] = "tadala";
    
    ft_memset(s, '0', 5);
    ft_memset(s2, '#', 6);
    ft_memset(s3, '!', 6);
    printf("%s\n", s);
    printf("%s\n", s2);
    printf("%s\n", s3);
}