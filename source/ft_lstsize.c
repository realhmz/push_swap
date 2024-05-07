/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:24:56 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:25:04 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*head;
	head = lst;
	// if (!head)
	// 	return (0);
	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
