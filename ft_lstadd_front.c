/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:25:36 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:26:42 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;

void    ft_lstadd_front(t_list **list, t_list *new)
{
    if (!list || !new)
        return ;
    new->next = (*list);
    (*list) = new;
}
