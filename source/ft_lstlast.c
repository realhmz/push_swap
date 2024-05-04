/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:28:43 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:28:44 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack **lst)
{
	t_stack *head;

	head = *lst;
	while (head)
	{
		if (head->next)
			head = head->next;
		else
			return (head);
	}
	return (NULL);
}