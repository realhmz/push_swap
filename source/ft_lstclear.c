/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:23:17 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 15:23:17 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*head;

	head = *lst;
	if (!lst)
		return ;
	while (head)
	{
		*lst = head->next;
		free(head);
		head = *lst;
	}
	*lst = NULL;
}

// void	del(void *content)
// {
// 	// printf("hadchi li mktoub: %s\n", content);
// 	free(content);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_stack *finalnode = ft_lstnew(ft_strdup("TARZAN"));
// 	t_stack *secondnode = ft_lstnew(ft_strdup("there"));
// 	t_stack *firstnode = ft_lstnew(ft_strdup("hello"));
// 	t_stack *head;
// 	t_stack **lst;

// 	firstnode->next = secondnode;
// 	secondnode->next = finalnode;

// 	head = finalnode;
// 	lst = &head;

// 	// printf("%s\n", firstnode->content);
// 	// printf("%s\n", secondnode->content);
// 	// printf("%s\n", finalnode->content);
// 	ft_lstclear(lst, del);
// }