#include "push_swap.h"

void	sa(t_stack **a)
{
	swap(*a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(*b);
	write(1, "sb\n", 3);
}
void    ss(t_stack **a, t_stack **b)
{
    swap(*a);
    swap(*b);
    write(1, "ss\n", 3);
}
void    pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    tmp = *a;
    tmp = tmp->next;
    ft_lstadd_front(b,*a);
    *a = tmp;
    write(1, "pb\n", 3);
}

void    pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    tmp = *b;
    tmp = tmp->next;
    ft_lstadd_front(a,*b);
    *b = tmp;
    write(1, "pa\n", 3);
}

void    ra(t_stack **a)
{
    t_stack *tmp;
    tmp = *a;
    while (tmp)
    {
        swap(tmp);
        tmp = tmp->next;
    }
    write(1, "ra\n", 3);
}
void    rb(t_stack **b)
{
    t_stack *tmp;
    tmp = *b;
    while (tmp)
    {
        swap(tmp);
        tmp = tmp->next;
    }
    write(1, "rb\n", 3);
}
void    rr(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    tmp = *b;
    while (tmp)
    {
        swap(tmp);
        tmp = tmp->next;
    }
    tmp = *a;
    while (tmp)
    {
        swap(tmp);
        tmp = tmp->next;
    }
    write(1, "rr\n", 3);
}
void    rra(t_stack **a)
{
    t_stack *tmp;
    tmp = *a;
    while (tmp)
    {
        swap_last(tmp);
        tmp = tmp->next;
    }
    write(1, "rra\n", 4);
}
void    rrb(t_stack **b)
{
    t_stack *tmp;
    tmp = *b;
    while (tmp)
    {
        swap_last(tmp);
        tmp = tmp->next;
    }
    write(1, "rrb\n", 4);
}
void    rrr(t_stack **a,t_stack **b)
{
    t_stack *tmp;
    tmp = *b;
    while (tmp)
    {
        swap_last(tmp);
        tmp = tmp->next;
    }
    tmp = *a;
    while (tmp)
    {
        swap_last(tmp);
        tmp = tmp->next;
    }
    write(1, "rrr\n", 4);
}

// int main()
// {
//     t_stack *a;
//     t_stack *b;
//     t_stack *c;
//     t_stack *aa;
//     t_stack *bb;
//     t_stack *cc;
//     t_stack *d;
//     t_stack **stack_a;
//     t_stack **stack_b;
//     stack_a = malloc(sizeof(t_stack *));
//     stack_b = malloc(sizeof(t_stack *));
//     a  = ft_lstnew(1);
//     b = ft_lstnew(2);
//     c = ft_lstnew(3);
//     d = ft_lstnew(4);

//     aa  = ft_lstnew(5);
//     bb = ft_lstnew(6);
//     cc = ft_lstnew(7);

//     a->next = b;
//     b->next  = c;
//     c->next = d;
//     d->next = NULL;

//     aa->next = bb;
//     bb->next  = cc;
//     cc->next = NULL;
//     stack_a = &a;
//     stack_b = &aa;

//     // sa(stack_a);
//     // sb(stack_b);
//     // pa(stack_a,stack_b);
//     // pb(stack_a,stack_b);
//     // rra(stack_a);
//     // rrb(stack_b);
//     pb(stack_a,stack_b);
//     pb(stack_a,stack_b);
//     pb(stack_a,stack_b);
//     pb(stack_a, stack_b);
//     // rb(stack_b);
//     // rb(stack_b);
//     // rb(stack_b);
//     while (*stack_a)
//     {
//         printf("%d-> ",(*stack_a)->content);
//         (*stack_a) = (*stack_a)->next;
//     }
//     printf("\n");
//     while (*stack_b)
//     {
//         printf("%d-> ",(*stack_b)->content);
//         (*stack_b) = (*stack_b)->next;
//     }
    
// }