/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:18:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/29 14:53:29 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  handle_hex(unsigned long x, int prefix, size_t cap)
{
    size_t  len;
    char    *base;

    len = 0;
    if (x == 0 && prefix)
        return (write(1, "(nil)", 5));
    if (prefix)
        len += write(1, "0x", 2);
    if (!cap)
        base = "0123456789abcdef";
    if (cap)
        base = "0123456789ABCDEF";
    if (x > 15)
        len += handle_hex((x / 16), 0, cap);
    len += write(1, &base[x % 16], 1);
    return (len);
}
