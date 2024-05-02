/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:54:08 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 12:54:09 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head) 
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// #include <stdio.h>
// int main()
// {
// 	t_stack *a;
// 	t_stack *b;
// 	t_stack	*c;
// 	t_stack *head;

// 	int str = 50;
// 	int str1 = 42;
// 	a = ft_lstnew((int)str);
// 	b = ft_lstnew((int)str1);
// 	c = ft_lstnew(1241);
// 	head = a;
// 	a->next= b;
// 	b->next=c;
// 	c->next=NULL;

// 	while (head)
// 	{
// 		printf("number : %d\n",head->content);
// 		head = head->next;
// 	}

// }