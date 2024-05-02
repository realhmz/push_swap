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

a , b
tmp;
a = tmp;
tmp = b;
b = a;

void	ft_lstadd_front(t_stack **lst, t_stack *b)
{
	t_stack *a;

	a = *lst;
	a->content = b->content;
	a->cost_stack_a = b->cost_stack_a;
	b->next = a;
	*lst = b;
}

// #include <stdio.h>
// int main()
// {
// 	t_stack *a;
// 	t_stack *b;
// 	t_stack *head;
// 	a = ft_lstnew("hamza");
// 	b = ft_lstnew(" tarzan  ");
// 	head = a;
//     ft_lstadd_front(&head,b);
// 	while (head)
// 	{
// 		ft_putendl_fd(head->content,1);
// 		head = head->next;
// 	}
// }