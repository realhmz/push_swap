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
    int i;
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
    // (*stack_a) = tmp;
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

void    push_small_half(t_stack **stack_a, t_stack **stack_b)
{
    int     size;
    int     size_b;
    int     i = 0;
    t_stack *tmp;

    tmp = *stack_a;
    size_b = ft_lstsize(*stack_b);
    size = ft_lstsize(*stack_a);
    while (i < size)
    {
        if (tmp->index < size_b)
        {
            pb(stack_a,stack_b);
            rb(stack_b);
        }
        else if (tmp->index <= size_b + tmp->range)
            pb(stack_a, stack_b);
        i++;
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
void    sort_more(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *head;
    head = *stack_a;
    int range;
    range = 3;
    int i = 0;
    int size = ft_lstsize(*stack_a);
    while (i < size)
    {
        if (head->index < ft_lstsize(*stack_b))
        {
            pb(stack_a, stack_b);
            rb(stack_b);
        }
        else if (head->index <= ft_lstsize(*stack_b) + range)
            pb(stack_a, stack_b);
        else
            ra(stack_a);
        printf("\nstack b size ;%d\n", ft_lstsize(*stack_b));
        head = *stack_a;
        i++;
    }
    // sort_3(stack_a);
    send_back(stack_a, stack_b);
}
void    send_back(t_stack **stack_a, t_stack **stack_b)
{
    int i = 0;
    int max = max_pos(stack_b, 0);
    t_stack *head;
    head = *stack_b;
    // printf("max pos %d\n",max_pos(stack_b));
    while (head && ft_lstsize(*stack_b))
    {
        while (head->final_rank != max_pos(stack_b,i) - 1)
        {
            // printf("in");
            if (head->final_rank == max_pos(stack_b, i))
            {
                if (max_pos(stack_b, i) > (max_pos(stack_b, i)) / 2)
                {
                    while (max_pos(stack_b, i))
                        rrb(stack_b);
                    pa(stack_a, stack_b);
                    sa(stack_a);
                    i++;
                }
                else
                {
                    while (max_pos(stack_b, i))
                        rb(stack_b);
                        pa(stack_a, stack_b);
                    sa(stack_a);
                    i++;
                }
            }
            head = head->next;
        }
        head = *stack_b;
    }
    
    
}

int max_pos(t_stack **b, int j)
{
    int i = 0;
    t_stack *head = *b;
    int size = ft_lstsize(*b) + 1;
    // printf("looking for %d\n",size);
    while (head)
    {
        // printf("head->%d",head->index);
        if (head->final_rank == size - j)
            return i;
        i++;
        head = head->next;
    }
    return 0;
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