#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


typedef struct s_stack
{
    int            content;
    int            pos;
    int            target_pos;
    int            final_rank;
    int            cost_stack_a;
    int            cost_stack_b;
    struct s_stack *next;
}   t_stack;


void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int content);