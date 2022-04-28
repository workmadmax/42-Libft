/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:27:01 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/27 18:25:14 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;

void    ft_lstclear(t_list **list, void (*del)(void *))
{
    t_list  *temp;
    
    if (!list)
        return ;
    while ((*list))
    {
        temp = (*list)->next;
        ft_lstelone(*list, del);
        (*list) = temp;
    }
    list = NULL;
}
