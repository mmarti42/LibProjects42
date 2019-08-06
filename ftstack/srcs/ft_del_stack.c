/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:31:19 by olegmulko         #+#    #+#             */
/*   Updated: 2019/08/06 13:59:00 by aashara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstack.h"

void	ft_del_stack(t_stack **stack)
{
	if (!stack || !*stack)
		return ;
	(*stack)->id = 0;
	(*((*stack)->stack_size))--;
	if (*((*stack)->stack_size) == 0)
		free((*stack)->stack_size);
	(*stack)->next = NULL;
	free(*stack);
	stack = NULL;
}
