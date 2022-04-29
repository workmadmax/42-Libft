/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:52:22 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/29 10:52:23 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nitems, size_t size)
{
    void    *ptr;

    ptr = malloc(nitems * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, (nitems * size));
    return (ptr);
}
