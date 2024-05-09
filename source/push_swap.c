/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:04 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/09 12:15:35 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char **str;
	int *nbr;
	int i = 1;
	str = NULL;
	t_stack **stack_a;
	t_stack **stack_b;
	if (ac <= 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (i < ac)
	{
		str = get_str(str, av[i]);
		i++;
	}
	i = 0;
	nbr = str_to_nbr(str);
	int len = double_len(str);
	if (check_double(nbr, len))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	i = 0;
	if (!str || len == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	stack_a = stack_new(nbr, len);
	set_final_mark(stack_a);
	if (len <= 3)
		sort_3(stack_a);

	if (len > 3)
	{
		if (!is_sorted(stack_a))
			return (0);
		stack_b = malloc(sizeof(t_stack *));
		(*stack_b) = NULL;
		if (!stack_b)
			return (0);
		if (len == 4)
			sort_4(stack_a, stack_b);
		else if (len == 5)
			sort_5(stack_a, stack_b);
		else
			sort_more(stack_a, stack_b);
		free(stack_b);
	}
	free(nbr);
	clear_str(str);
	ft_lstclear(stack_a);
	free(stack_a);
}