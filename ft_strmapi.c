/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:16:07 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/23 12:19:00 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;
    
    if (!s)
        return (NULL);
    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
