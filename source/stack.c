#include "push_swap.h"  

t_stack **stack_new(int *nbr, int len)
{
    int i;
    t_stack **a;
    t_stack *tmp;
	t_stack *new_node;
    a = malloc(len * sizeof(t_stack *));
    if (a == NULL)
        return NULL;
    tmp = NULL;
	i = len -1;
    while (i >= 0)
    {
        new_node = ft_lstnew(nbr[i]);
        new_node->next = tmp;
        tmp = new_node;
        a[i] = tmp;
		i--;
    }
    return a;
}
void    clear_stack(t_stack **stack_a)
{
    t_stack *head;
    t_stack *tmp;

    ft_lstclear(stack_a);
    free(stack_a);
    // head = *stack_a;
    // tmp = *stack_a;
    // head = head->next;
    // while (head)
    // {
    //     // free (tmp);
    //     head = head->next;
    // }
}
// int main()
// {
//     t_stack **stack;
//     int nbr[] = {1,2,3,4,5};

//     // t_stack *a = ft_lstnew(20);
//     // t_stack *b = ft_lstnew(13);
//     // t_stack *c = ft_lstnew(12);
//     // t_stack *d = ft_lstnew(32);
//     // stack = &a;
//     stack = stack_new(nbr,5);
//     // a->next = b;
//     // b->next = c;
//     // c->next = d;
//     // d->next = NULL;
//     t_stack *tmp = (*stack);
//     while (tmp)
//     {
//         printf("->%d",tmp->content);
//         tmp = tmp->next;
//     }
	
// }