/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realhmz <realhmz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:35 by het-taja          #+#    #+#             */
/*   Updated: 2024/06/15 20:31:31 by realhmz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_pos(t_stack **b)
{
	int		i;
	t_stack	*head;
	int		size;

	i = 0;
	head = *b;
	size = ft_lstsize(*b);
	while (head)
	{
		if (head->final_rank == size)
			return (i);
		i++;
		head = head->next;
	}
	return (-1);
}

void	send_back(t_stack **a, t_stack **b)
{
	int		max;

	while (*b)
	{
		max = max_pos(b);
		maxifixi(max, b);
		pa(a, b);
	}
}

int	ft_range(t_stack **stack)
{
	if (ft_lstsize(*stack) <= 15)
		return (2);
	if (ft_lstsize(*stack) <= 150)
		return (15);
	if (ft_lstsize(*stack) <= 500)
		return (33);
	else
		return (45);
}

void	maxifixi(int max, t_stack **b)
{
	while (max)
	{
		if (max > ft_lstsize(*b) / 2)
		{
			while (max != ft_lstsize(*b))
			{
				rrb(b);
				max++;
			}
			max = 0;
		}
		else
		{
			while (max > 0)
			{
				rb(b);
				max--;
			}
		}
	}
}
