/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:22:23 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/29 15:01:40 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  handle_num(long long nbr)
{
    size_t  len;
    
    len = 0;
    if (nbr < 0)
    {
        write(1, "-", 1);
        len ++;
        len += handle_num(nbr * (-1));
    }
    else if (nbr >= 0 && nbr <= 9)
        len += handle_char(nbr + 48);
    else
    {
        len += handle_num(nbr/ 10);
        len += handle_num(nbr % 10);
    }
    return (len);
}