/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:25 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 10:54:40 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **list, void (*del)(void *))
{
    t_list  *temp;
    
    while (*list != NULL)
    {
        temp = *list;
        *list = (*list)->next;
        (*del)(temp->content);
        free(temp);
    }
}
