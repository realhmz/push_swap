/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:04 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/13 13:30:51 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_after(t_stack **stack_a, t_stack **stack_b, char **str)
{
	int	i;

	i = double_len(str);
	if (i > 3)
	{
		if (!is_sorted(stack_a))
			return ;
		stack_b = malloc(sizeof(t_stack *));
		(*stack_b) = NULL;
		if (!stack_b)
			return ;
		if (i == 4)
			sort_4(stack_a, stack_b);
		else if (i == 5)
			sort_5(stack_a, stack_b);
		else
			sort_more(stack_a, stack_b);
		free(stack_b);
	}
}

void	clean(int *nbr, char **str, t_stack **stack_a)
{
	free(nbr);
	clear_str(str);
	ft_lstclear(stack_a);
	free(stack_a);
}

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**str;
	int		*nbr;
	int		i;

	i = 0;
	str = NULL;
	stack_b = NULL;
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
	sort_after(stack_a, stack_b, str);
	clean(nbr, str, stack_a);
}
