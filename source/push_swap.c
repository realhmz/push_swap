/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:04 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 11:38:15 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_after(t_stack **a, t_stack **b, char **str)
{
	int	i;

	i = double_len(str);
	if (i > 3)
	{
		if (!is_sorted(a))
			return ;
		b = malloc(sizeof(t_stack *));
		(*b) = NULL;
		if (!b)
			return ;
		if (i == 4)
			sort_4(a, b);
		else if (i == 5)
			sort_5(a, b);
		else
			sort_more(a, b);
		free(b);
	}
}

static void	clean(int *nbr, char **str, t_stack **a)
{
	free(nbr);
	clear_str(str);
	ft_lstclear(a);
	free(a);
}

void	clean_double(int *nbr, char **str)
{
	free (nbr);
	clear_str(str);
	str = NULL;
	exit (error());
}

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;
	char	**str;
	int		*nbr;
	int		i;

	i = 0;
	str = NULL;
	b = NULL;
	if (ac <= 1)
		return (1);
	while (++i < ac)
		str = get_str(str, av[i]);
	nbr = str_to_nbr(str);
	i = double_len(str);
	if (!str || i == 0 || check_double(nbr, i))
		clean_double(nbr, str);
	a = stack_new(nbr, i);
	set_final_mark(a);
	if (i <= 3)
		sort_3(a);
	sort_after(a, b, str);
	clean(nbr, str, a);
}
