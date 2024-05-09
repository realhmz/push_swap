/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:40:10 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/09 11:40:14 by het-taja         ###   ########.fr       */
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
