/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:57:08 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/27 19:33:46 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  slen;
    size_t  i;
    
    slen = ft_strlen(s);
    if (start >= slen)
        return (ft_strdup(""));
    if (slen - start < len)
        len = slen - start;
    sub = malloc((len + 1) * sizeof(char));
    if (sub == NULL)
        return  (NULL);
    i = 0;
    while (s[i + start] && (i < len))
    {
        sub[i] = s[start + 1];
        i++;
    }
    sub[len] = '\0';
    return (sub);
}
