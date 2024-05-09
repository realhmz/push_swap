/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:57 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/09 11:40:03 by het-taja         ###   ########.fr       */
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
