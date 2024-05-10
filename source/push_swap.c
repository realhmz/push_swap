/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:04 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/10 14:45:37 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**str;
	int		*nbr;
	int		i;

	i = 0;
	str = NULL;
	if (ac <= 1)
		exit(error());
	while (++i < ac)
		str = get_str(str, av[i]);
	nbr = str_to_nbr(str);
	i = double_len(str);
	if (!str || i == 0 || check_double(nbr, i))
		exit(error());
	stack_a = stack_new(nbr, i);
	set_final_mark(stack_a);
	if (i <= 3)
		sort_3(stack_a);
	if (i > 3)
	{
		if (!is_sorted(stack_a))
			return (0);
		stack_b = malloc(sizeof(t_stack *));
		(*stack_b) = NULL;
		if (!stack_b)
			return (0);
		if (i == 4)
			sort_4(stack_a, stack_b);
		else if (i == 5)
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
