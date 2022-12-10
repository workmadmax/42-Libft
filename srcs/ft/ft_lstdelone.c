/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:34 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 10:57:22 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *list, void (*del)(void *))
{
    t_list  *temp;
    
    temp = list;
    if (list == NULL)
        return ;
    list = list->next;
    (*del)(temp->content);
    free(temp);
}
