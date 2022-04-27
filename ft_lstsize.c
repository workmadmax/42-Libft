/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:33:30 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:34:43 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;

int ft_lstsize(t_list *list)
{
    size_t  i;
    
    i = 0;
    while (list)
    {
        list = list->next;
        i++;
    }
    return (i);
}
