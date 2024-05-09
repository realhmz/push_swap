/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:52 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/09 12:54:29 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack **lst)
{
	t_stack	*head;

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
