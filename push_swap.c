// #include "push_swap.h"

// int main(int ac, char **av)
// {
//     char **str;
//     str = NULL;
//     char **tmp;
//     int *nbr;
//     t_stack **stack_a;
//     t_stack **stack_b;
//     int i = 1;
//     if (ac == 1)
//         return 0;
//     while (i < ac)
//     {
//         str = get_str(str,av[i]);
//         i++;
//     }   
//     i = 0;
//     nbr = str_to_nbr(str);
//     int len = double_len(str);
//     if (check_double(nbr,len))
//     {
//         printf("erooooor double");
//         exit (1);
//     }
//     i = 0;
//     stack_a = stack_new(nbr,len);
//     free(nbr);
//     set_final_mark(stack_a);
//     clear_str(str);
//     if (len <= 3)
//         sort_3(stack_a);
//     if (len > 3)
//     {
//         if (!is_sorted(stack_a))
//             return 0;
//         stack_b = malloc(sizeof(t_stack *));
//         if (len == 4)
//             sort_4(stack_a, stack_b);
//         else if (len == 5)
//             sort_5(stack_a, stack_b);
//         else
//             sort_more(stack_a, stack_b);
//     }
//     ft_lstclear(stack_a);
//     // free(stack_a);
// }