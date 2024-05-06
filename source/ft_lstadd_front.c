/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:16:28 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:16:29 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a)
{
	t_stack *tmp;

	if (ft_lstsize(a) <= 1)
		return;
	tmp = malloc(sizeof(t_stack));
	tmp->content = a->content;
	tmp->final_rank = a->final_rank;
	tmp->index = a->index;
	a->content = a->next->content;
	a->final_rank = a->next->final_rank;
	a->index = a->index;
	a->next->content = tmp->content;
	a->next->content = tmp->content;
	a->next->final_rank = tmp->final_rank;
	a->next->index = tmp->index;
	free(tmp);
}

void	swap_last(t_stack *a)
{
	t_stack *tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->content = a->content;
	tmp->final_rank = a->final_rank;
	tmp->index = a->index;
	a->content = ft_lstlast(&a)->content;
	a->final_rank = ft_lstlast(&a)->final_rank;
	a->index = a->index;	
	ft_lstlast(&a)->content = tmp->content;
	ft_lstlast(&a)->final_rank = tmp->final_rank;
	ft_lstlast(&a)->index = tmp->index;
	ft_lstlast(&a)->next = NULL;
	free(tmp);
}
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_stack *a;
// 	t_stack *b;
// 	a = ft_lstnew(500);
// 	b = ft_lstnew(600);
// 	a->final_rank = 1;
// 	b->final_rank = 2;
// 	a->next = b;
// 	b->next = NULL;
// 	ft_lstadd_front(a);
// 	while (a)
// 	{
// 		printf("a :->%d,final_rank : %d\n",a->content,a->final_rank);
// 		a = a->next;
// 	}
// }