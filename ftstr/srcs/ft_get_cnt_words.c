/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cnt_words.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 21:18:32 by ggrimes           #+#    #+#             */
/*   Updated: 2019/06/27 21:18:36 by ggrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ftstr.h"

size_t ft_get_cnt_words(const char *str, char spr)
{
    size_t  i;
    size_t  count;
    short   in_word;

    count = 0;
    if (!str)
        return (count);
    i = -1;
    in_word = 0;
    while (str[++i])
    {
        if (str[i] != spr && !in_word)
        {
            in_word = !in_word;
            count++;
        }
        if (str[i] == spr && in_word)
            in_word = !in_word;
    }
    return (count);
}
