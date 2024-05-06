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
//For 3 numbers, I first get the highest final rank in the stack, if the first element of the stack has the highest final rank
// , I rotate (ra) the stack, else if the second element of the stack has the highest final rank, I reverse rotate (rra) the 
//stack, then I just check if 
// I need a quick swap sa if the final rank of the first element is bigger than the final rank of the second element.

int is_highest(t_stack *head, t_stack **stack_a)
{
    int i;
    t_stack *tmp;
    tmp = (*stack_a);
    while ((*stack_a))
    {
        if (head->final_rank < (*stack_a)->final_rank)
            return 0;
        (*stack_a) = (*stack_a)->next;
    }
    (*stack_a) = tmp;
    return 1;
    
}

void    sort_3(t_stack **stack)
{
    int size = ft_lstsize(*stack);
    if (size == 2 && (*stack)->final_rank > (*stack)->next->final_rank)
        sa(stack);
    else
    {
        if (is_highest(*stack,stack))
            ra(stack);
        else if (is_highest((*stack)->next,stack))
        {
            rra(stack);
            if (is_sorted(stack))
                sa(stack);
        }
    }
}

void    push_small_half(t_stack **stack_a, t_stack **stack_b)
{
    int     size;
    int     i = 0;

    size = ft_lstsize(*stack_a);
    while (i < size)
    {
        if ((*stack_a)->final_rank <= (size / 2))
            pb(stack_a,stack_b);
        else
            ra(stack_a);        
        i++;
    }
}
void    push_next(t_stack **stack_a, t_stack **stack_b)
{
    int     size;
    int     i = 0;

    size = ft_lstsize(*stack_a);
    while (i < size - 3)
    {
        if ((*stack_a)->final_rank > (size / 2))
            pb(stack_a,stack_b);
        else
            ra(stack_a);        
        i++;
    }
}
void    sort_more(t_stack **stack_a, t_stack **stack_b)
{
    push_small_half(stack_a, stack_b);
    push_next(stack_a, stack_b);
    sort_3(stack_a);
    printf("\nA size %d\n",ft_lstsize(*stack_a));
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