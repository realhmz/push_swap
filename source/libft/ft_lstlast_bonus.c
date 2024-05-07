/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:28:43 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/07 22:13:27 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*head;

	head = lst;
	while (head)
	{
		if (head->next)
			head = head->next;
		else
			return (head);
	}
	return (NULL);
}
