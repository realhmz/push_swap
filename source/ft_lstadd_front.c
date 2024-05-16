/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:30 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 13:15:09 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a)
{
	t_stack	*tmp;

	if (ft_lstsize(a) <= 1)
		return ;
	tmp = malloc(sizeof(t_stack));
	tmp->content = a->content;
	tmp->final_rank = a->final_rank;
	a->content = a->next->content;
	a->final_rank = a->next->final_rank;
	a->next->content = tmp->content;
	a->next->content = tmp->content;
	a->next->final_rank = tmp->final_rank;
	free(tmp);
}

void	swap_last(t_stack *a)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->content = a->content;
	tmp->final_rank = a->final_rank;
	a->content = ft_lstlast(&a)->content;
	a->final_rank = ft_lstlast(&a)->final_rank;
	ft_lstlast(&a)->content = tmp->content;
	ft_lstlast(&a)->final_rank = tmp->final_rank;
	ft_lstlast(&a)->next = NULL;
	free(tmp);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
