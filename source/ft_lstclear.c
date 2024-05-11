/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:36 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/11 12:18:33 by het-taja         ###   ########.fr       */
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
