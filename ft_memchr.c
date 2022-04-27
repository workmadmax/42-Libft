/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:03:53 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 16:05:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memchr(const void *ptr, int c, size_t len)
{
    unsigned char   *str;
    
    while (len-- > 0)
    {
        str = (unsigned char *)ptr;
        if (*str == (unsigned char) c)
            return (str);
        ptr++;
    }
    return (NULL);
}
