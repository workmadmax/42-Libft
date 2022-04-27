/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:29:32 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:30:27 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;

void    ft_lstdelone(t_list *list, void (*del)(void *))
{
    if (!list)
        return ;
    del(list->content);
    free(list);
}
