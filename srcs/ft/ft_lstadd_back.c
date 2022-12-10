/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:03 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 10:51:41 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **list, t_list *new)
{
    t_list  *tmp;

    if (new == NULL)
        return ;
    if (*list == NULL)
        *list = new;
    else
    {
        tmp = ft_lstlast(*list);
        tmp->next = new;
    }
}
