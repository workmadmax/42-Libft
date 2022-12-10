/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:33:30 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/10 11:17:32 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *list)
{
    int     count;
    t_list  *temp;

    temp = list;
    count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return (count);
}
