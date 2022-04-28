/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:48 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/27 18:25:07 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **list, t_list *new)
{
    t_list *tail;
    
    if (!list || !new)
        return ;
    if (!(list))
    {
        *list = new;
        return ;
    }
    tail = ft_lstlast(*list);
    tail->next = new;
}
