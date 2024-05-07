#include "push_swap.h"

// int ft_max_size(t_stack *stack)
// {
//     int len;

//     len = 0;
//     while (stack)
//     {
//         if (len < stack->final_rank)
//             len = stack->final_rank;
//         stack = stack->next;
//     }
// }

int is_sorted(t_stack **stack)
{
	t_stack *tmp;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->next && tmp->final_rank > tmp->next->final_rank)
			return (1);
		tmp = tmp->next;
	}
	return (0);   
}

int is_highest(t_stack *head, t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *tmp1;

	tmp1 = *stack_a;
	tmp = head;
	while (tmp1)
	{
		if (tmp->final_rank < tmp1->final_rank)
			return 0;
		tmp1 = tmp1->next;
	}
	return 1;
	
}

int is_lowest(t_stack *head, t_stack **stack_a)
{
	t_stack *tmp1;

	tmp1 = *stack_a;
	while (tmp1)
	{
		if (head->final_rank <= tmp1->final_rank)
			tmp1 = tmp1->next;
		else
			return 0;
	}
	return 1;
	
}

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
void	clear_str(char **str)
{
	int i = 0;
	while (str && str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
// void    push_small_half(t_stack **stack_a, t_stack **stack_b)
// {
// 	int     size;
// 	int     size_b;
// 	int     i = 0;
// 	t_stack *tmp;

// 	tmp = *stack_a;
// 	size_b = ft_lstsize(*stack_b);
// 	size = ft_lstsize(*stack_a);
// 	while (i < size)
// 	{
// 		if (tmp->index < size_b)
// 		{
// 			pb(stack_a,stack_b);
// 			rb(stack_b);
// 		}
// 		else if (tmp->index <= size_b + tmp->range)
// 			pb(stack_a, stack_b);
// 		i++;
// 	}
// }
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
void	reset_final_rank(t_stack **stack)
{
	t_stack *head;
	head = *stack;
	while (head)
	{
		head->final_rank = 0;
		head= head->next;
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
void    sort_more(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *head;
	head = *stack_a;
	int range;
	range = ft_range(stack_a);
	// print_stack(*stack_a);
	while (*stack_a)
	{
		// print_stack(*stack_a);
		// printf("\n");
		if (head->final_rank < ft_lstsize(*stack_b))
		{
			// printf("wa l3zwa\n");
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else if (head->final_rank >= ft_lstsize(*stack_b)
			&& head->final_rank <= ft_lstsize(*stack_b) + range)
				pb(stack_a, stack_b);
		else
			ra(stack_a);
		head = *stack_a;
	}
	reset_final_rank(stack_b);
	set_final_mark(stack_b);
	send_back(stack_a, 	stack_b);
}

void	print_stack(t_stack *stack)
{
	t_stack *head;

	head = stack;
	while (head)
	{
		printf("-> %d ,",head->content);
		head= head->next;
	}
	
}
void    send_back(t_stack **stack_a, t_stack **stack_b)
{
	int max ;
	t_stack *head;
	head = *stack_b;
	// printf("max pos %d\n",max_pos(stack_b));
	while (*stack_b)
	{
		max = max_pos(stack_b);
		// printf("max is %d \n",max);
		// print_stack(*stack_b);
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
			{
				while (max > 0)
				{
					rb(stack_b);
					max--;
				}
			}
		}
		pa(stack_a, stack_b);
	}
}
	
	


int max_pos(t_stack **b)
{
	int i = 0;
	t_stack *head = *b;
	int size = ft_lstsize(*b);
	// printf("looking for %d\n",size);
	while (head)
	{
		// printf("head->%d",head->index);
		if (head->final_rank == size)
			return i;
		i++;
		head = head->next;
	}
	return -1;
}
// void    half_push_b(t_stack *stack)
// {
//     int i;
//     int stack_size;

//     i = 0;
//     stack_size = ft_max_size(stack);
//     while (stack->next)
//     {
//         if (stack->final_rank < stack_size)
//             pb(stack);
//         else
//             ra(stack);
//         stack = stack->next;
//     }
// }