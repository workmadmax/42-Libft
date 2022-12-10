/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:17 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 10:53:08 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **list, t_list *new)
{
    t_list  *elem;
    
    if (*list == NULL)
        *list = new;
    else
    {
        elem = new;
        elem->next = *list;
        *list = elem;
    }
}
