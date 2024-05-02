#include "push_swap.h"

int ft_max_size(t_stack *stack)
{
    int len;

    len = 0;
    while (stack)
    {
        if (len < stack->final_rank)
            len = stack->final_rank;
        stack = stack->next;
    }
}

void    half_push_b(t_stack *stack)
{
    int i;
    int stack_size;

    i = 0;
    stack_size = ft_max_size(stack);
    while (stack->next)
    {
        if (stack->final_rank < stack_size)
            pb(stack);
        else
            ra(stack);
        stack = stack->next;
    }
}