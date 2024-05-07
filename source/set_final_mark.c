#include "push_swap.h"

// find the ibigest and give it max mark
void    set_final_mark(t_stack **stack)
{
    t_stack *head;
    t_stack *tmp;
    t_stack *save;

    head = *stack;
    save = head;
    tmp = head;
    while (head)
    {
        head->final_rank = 0;
        head = head->next;
    }
    head = tmp;
    while (head)
    {
        head->final_rank++;
        while (tmp)
        {
            if (head->content > tmp->content)
                head->final_rank++;            
            tmp = tmp->next;
        }
        tmp = save;
        head = head->next;
    }
}
