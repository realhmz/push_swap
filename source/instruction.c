#include "push_swap.h"

void    sa(t_stack *stack)
{
    ft_lstadd_front(&stack,stack->next);
    write(1, "sa\n", 3);
}
void    sb(t_stack *stack)
{
    ft_lstadd_front(&stack, stack->next);
    write(1, "sb\n", 3);
}

int main()
{
    t_stack *a;
    t_stack *b;
    t_stack *c;

    a  = ft_lstnew(50);
    b = ft_lstnew(1);
    c = ft_lstnew(400);
    a->next = b;
    b->next  = c;
    c->next = NULL;
    sa(a);

    while (a)
    {
        printf("%d-> ",a->content);
        a = a->next;
    }
    
}