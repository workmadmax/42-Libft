/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:35:14 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 11:04:50 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
    t_list  *list_map;
    t_list  *elem;
    
    if (list == NULL)
        return (NULL);
    list_map = NULL;
    while (list != NULL)
    {
        elem = ft_lstnew((*f)(list->content));
        if (elem == NULL)
            ft_lstclear(&elem, (*del));
        else
            ft_lstadd_back(&list_map, elem);
        list = list->next;
    }
    return (list_map);
}
