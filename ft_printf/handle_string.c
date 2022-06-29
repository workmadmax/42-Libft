/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:08:00 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/29 14:59:55 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  handle_str(const char *str)
{
    size_t  count;

    count = 0;
    if (!str)
        return (write(1, "(null)", 6));
    while (str[count])
        handle_char(str[count]);
    return (count);
}
