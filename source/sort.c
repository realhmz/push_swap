/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:22 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 11:38:15 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **stack)
{
	int	size;

	size = ft_lstsize(*stack);
	if (size == 2 && is_highest(*stack, stack))
		sa(stack);
	else
	{
		if (!is_sorted(stack))
			return ;
		if (is_highest(*stack, stack))
			ra(stack);
		else if (is_highest((*stack)->next, stack))
		{
			rra(stack);
		}
		if (is_sorted(stack))
			sa(stack);
	}
}

void	push_next(t_stack **a, t_stack **b)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(*a);
	while (i < size - 4)
	{
		if ((*a)->final_rank > (size / 2))
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

void	sort_4(t_stack **stack, t_stack **b)
{
	t_stack	*head;

	head = *stack;
	while (*stack)
	{
		if (is_lowest(head, stack))
		{
			pb(stack, b);
			break ;
		}
		ra(stack);
	}
	sort_3(stack);
	pa(stack, b);
}

void	sort_5(t_stack **stack, t_stack **b)
{
	t_stack	*head;
	int		flag;

	head = *stack;
	if (max_pos(stack) < 2)
		flag = 1;
	else
		flag = 0;
	while (*stack)
	{
		if (is_lowest(head, stack))
		{
			pb(stack, b);
			break ;
		}
		if (flag)
			rra(stack);
		else
			ra(stack);
	}
	sort_4(stack, b);
	pa(stack, b);
}

void	sort_more(t_stack **a, t_stack **b)
{
	t_stack	*head;
	int		range;

	head = *a;
	range = ft_range(a);
	while (*a)
	{
		if (head->final_rank < ft_lstsize(*b))
		{
			pb(a, b);
			rb(b);
		}
		else if (head->final_rank <= ft_lstsize(*b) + range)
			pb(a, b);
		else
			ra(a);
		head = *a;
	}
	reset_final_rank(b);
	set_final_mark(b);
	send_back(a, b);
}
