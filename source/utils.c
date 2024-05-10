/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:42 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/10 14:37:07 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->next && tmp->final_rank > tmp->next->final_rank)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	is_highest(t_stack *head, t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp1 = *stack_a;
	tmp = head;
	while (tmp1)
	{
		if (tmp->final_rank < tmp1->final_rank)
			return (0);
		tmp1 = tmp1->next;
	}
	return (1);
}

int	is_lowest(t_stack *head, t_stack **stack_a)
{
	t_stack	*tmp1;

	tmp1 = *stack_a;
	while (tmp1)
	{
		if (head->final_rank <= tmp1->final_rank)
			tmp1 = tmp1->next;
		else
			return (0);
	}
	return (1);
}

void	clear_str(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	reset_final_rank(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head)
	{
		head->final_rank = 0;
		head = head->next;
	}
}
