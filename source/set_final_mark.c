/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_final_mark.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:14 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 13:15:48 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_final_mark(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;
	t_stack	*save;

	head = *stack;
	save = head;
	tmp = head;
	while (head)
	{
		head->final_rank = 0;
		head = head->next;
	}
	head = tmp;
	while (head)
	{
		head->final_rank++;
		while (tmp)
		{
			if (head->content > tmp->content)
				head->final_rank++;
			tmp = tmp->next;
		}
		tmp = save;
		head = head->next;
	}
}
