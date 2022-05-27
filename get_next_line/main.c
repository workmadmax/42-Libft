/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:34:50 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/27 11:26:51 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
    int main()
{
    int     fd;
    char    *line;

    fd = open("teste", O_RDONLY);
    printf(" Buffer > %d\n", BUFFER_SIZE);
    line = get_next_line(fd);
    printf(" Printando a linha : %s\n", line);
    line = get_next_line(fd);
    printf(" Printando a linha rmk : %s\n", line);
    free(line);
}
*/

int main(void)
{
    char    *line;
    int     fd1;
    int     fd2;
    int     fd3;

    fd1 = open("", O_RDONLY);
    fd2 = open("", O_RDONLY);
    fd3 = open("", O_RDONLY);
    i = 1;
    while (i < 7)
    {
        line = get_next_line(fd1);
        printf("line [%02d]: %s", i, line);
        free(line);
        line = get_next_line(fd2);
        printf("line [%02d]: %s", i, line);
        free(line);
        line = get_next_line(fd3);
        printf("line [%02d]: %s", i, line);
        free(line);
        i++;
    }
    close(fd1);
    close(fd2);
    close(fd3);
    return (0);
}
