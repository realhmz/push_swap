#include "push_swap.h"

void    sort_3(t_stack **stack)
{
	int size = ft_lstsize(*stack);
	if (size == 2 && is_highest(*stack,stack) )
		sa(stack);
	else
	{
		if (!is_sorted(stack))
			return;
		if (is_highest(*stack,stack))
			ra(stack);
		else if (is_highest((*stack)->next,stack))
		{
			rra(stack);
			
		}
		if (is_sorted(stack))
				sa(stack);
	}
}

void    push_next(t_stack **stack_a, t_stack **stack_b)
{
	int     size;
	int     i = 0;

	size = ft_lstsize(*stack_a);
	while (i < size - 4)
	{
		if ((*stack_a)->final_rank > (size / 2))
			pb(stack_a,stack_b);
		else
			ra(stack_a);        
		i++;
	}
}

void	sort_4(t_stack **stack,t_stack **stack_b)
{
	t_stack *head;

	head = *stack;
	while (*stack)
	{
		if (is_lowest(head, stack))
		{
			pb(stack, stack_b);
			break;
		}
		ra(stack);
	}
	sort_3(stack);
	pa(stack, stack_b);
}
void	sort_5(t_stack **stack,t_stack **stack_b)
{
	t_stack *head;

	head = *stack;
	while (*stack)
	{
		if (is_lowest(head, stack))
		{
			pb(stack, stack_b);
			break;
		}
		ra(stack);
	}
	sort_4(stack,stack_b);
	pa(stack, stack_b);
}


void    sort_more(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *head;
	head = *stack_a;
	int range;
	range = ft_range(stack_a);
	// print_stack(*stack_a);
	while (*stack_a)
	{
		if (head->final_rank < ft_lstsize(*stack_b))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else if (head->final_rank <= ft_lstsize(*stack_b) + range)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		head = *stack_a;
	}
	reset_final_rank(stack_b);
	set_final_mark(stack_b);
	send_back(stack_a, 	stack_b);
}

