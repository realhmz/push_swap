#include "push_swap.h"

int max_pos(t_stack **b)
{
	int i = 0;
	t_stack *head = *b;
	int size = ft_lstsize(*b);
	while (head)
	{
		if (head->final_rank == size)
			return i;
		i++;
		head = head->next;
	}
	return -1;
}

void    send_back(t_stack **stack_a, t_stack **stack_b)
{
	int		max;
	t_stack	*head;

	head = *stack_b;
	while (*stack_b)
	{
		max = max_pos(stack_b);
		maxifixi(max, stack_b);
		pa(stack_a, stack_b);
	}
}

int ft_range(t_stack **stack)
{
	if (ft_lstsize(*stack) <= 15)
		return 2;
	if (ft_lstsize(*stack) <= 150)
		return 13;
	if (ft_lstsize(*stack) <= 500)
		return 33;
	else
		return(45);
}
void	maxifixi(int max, t_stack **stack_b)
{
	while (max)
		{
			if (max > ft_lstsize(*stack_b) / 2)
			{
				while (max != ft_lstsize(*stack_b))
				{
					rrb(stack_b);
					max++;
				}
				max = 0;
			}
			else
				while (max > 0)
				{
					rb(stack_b);
					max--;
				}
		}
}
// int ft_range(t_stack **stack)
// {
// 	if (ft_lstsize(*stack) <= 15)
// 		return 2;
// 	if (ft_lstsize(*stack) <= 150)
// 		return 13;
// 	if (ft_lstsize(*stack) <= 500)
// 		return 33;
// 	else
// 		return(45);
	
// }