/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:53:14 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/10 14:35:23 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		swap(tmp);
		tmp = tmp->next;
	}
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		swap(tmp);
		tmp = tmp->next;
	}
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		swap(tmp);
		tmp = tmp->next;
	}
	tmp = *a;
	while (tmp)
	{
		swap(tmp);
		tmp = tmp->next;
	}
	write(1, "rr\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		swap_last(tmp);
		tmp = tmp->next;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		swap_last(tmp);
		tmp = tmp->next;
	}
	write(1, "rrb\n", 4);
}
