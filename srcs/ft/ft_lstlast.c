/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:53:52 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 11:01:05 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *list)
{
    t_list  *temp;
    
    if (list == NULL)
        return (NULL);
    temp = list;
    while (temp->next != NULL)
        temp = temp->next;
    return (temp);
}
