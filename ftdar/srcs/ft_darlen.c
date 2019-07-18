/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 23:24:54 by ggrimes           #+#    #+#             */
/*   Updated: 2019/07/05 16:59:04 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftdar.h"

size_t	ft_darlen(char **dar)
{
	size_t	size;

	size = 0;
	if (!dar)
		return (size);
	while (dar[size])
		size++;
	return (size);
}