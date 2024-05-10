/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:32 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/10 14:36:06 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**stack_new(int *nbr, int len)
{
	int		i;
	t_stack	**a;
	t_stack	*tmp;
	t_stack	*new_node;

	a = malloc(len * sizeof(t_stack *));
	if (a == NULL)
		return (NULL);
	tmp = NULL;
	i = len - 1;
	while (i >= 0)
	{
		new_node = ft_lstnew(nbr[i]);
		new_node->next = tmp;
		tmp = new_node;
		a[i] = tmp;
		i--;
	}
	return (a);
}

int	error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
