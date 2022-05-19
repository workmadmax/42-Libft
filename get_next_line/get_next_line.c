/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:54:42 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/19 11:22:36 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
#include "get_next_line.h"

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