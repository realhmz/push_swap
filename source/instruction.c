/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:40:35 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/10 14:34:30 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	swap(*a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(*b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(*a);
	swap(*b);
	write(1, "ss\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	tmp = tmp->next;
	ft_lstadd_front(b, *a);
	*a = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	tmp = tmp->next;
	ft_lstadd_front(a, *b);
	*b = tmp;
	write(1, "pa\n", 3);
}
