/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:30:43 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 10:59:14 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *list, void (*f)(void *))
{
    t_list  *list_ptr;
    
    list_ptr = list;
    while (list_ptr != NULL)
    {
        (*f)(list_ptr->content);
        list_ptr = list_ptr->next;
    }
}
