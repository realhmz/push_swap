/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:31:17 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/07 22:13:27 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*head;

	head = *lst;
	if (!head)
	{
		*lst = new;
		return ;
	}
	while (head)
	{
		if (head->next)
			head = head->next;
		else
		{
			head->next = new;
			return ;
		}
	}
}
