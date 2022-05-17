/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:54:42 by mdouglas          #+#    #+#             */
/*   Updated: 2022/05/17 19:15:42 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


int main()
{
    int     fd;
    char    *str;

    fd = open("teste.txt", O_RDONLY);
    str = malloc(sizeof(char ) * BUFFER_SIZE);
    read(fd, str, BUFFER_SIZE);
    printf("%ld\n", read(fd, str, BUFFER_SIZE));
    printf("%s\n", s);
    free(s);
}