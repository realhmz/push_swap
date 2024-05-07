#include "push_swap.h"

void    ft_swap(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
int check_double(int *nbr, int len)
{
    int i = 1;
    int j;
    int x = 0;
    int d = 0;
    while (i < len)
    {
        j = nbr[i];
        d = 0;
        while (d < len)
        {
            if (j == nbr[d])
                x++;
            if (x > 1)
            {
                printf("%d",nbr[d]);
                return (1);
            }
            d++;
        }
        x = 0;
        i++;
    }
    return 0;
}
int nbr_len(int l)
{
    static int i;
    if (l == 0)
        return i;
    else
        i = l;
    return i;
}
int *str_to_nbr(char **str)
{
    int i;
    int j;
    int *nbr;
    i = double_len(str);
    j = 0;
    nbr = (int *)malloc(sizeof(int ) * i);
    while (j < i)
    {
        // printf("time\n");
        nbr[j] = ft_atoi(str[j]);
        j++;
    }
    nbr_len(j);
    // free(str);
    return nbr;
}


static char **get_str(char **s1, char *s2)
{
    char **tmp;
    char **tmp1;
    char **str;

    tmp = s1;

    tmp1 =  ft_split(s2,' ');
    str = ft_strdjoin(tmp,tmp1);
    return str;
}
int main(int ac, char **av)
{
    char **str;
    str = NULL;
    char **tmp;
    int *nbr;
    t_stack **stack_a;
    t_stack **stack_b;
    int i = 1;
    if (ac == 1)
        return 0;
    while (i < ac)
    {
        str = get_str(str,av[i]);
        i++;
    }   
    i = 0;
    nbr = str_to_nbr(str);
    // clear_str(str);
    int len = double_len(str);
    if (check_double(nbr,len))
    {
        printf("erooooor double");
        exit (1);
    }
    i = 0;
    stack_a = stack_new(nbr,len);
    set_final_mark(stack_a);
    if (len <= 3)
        sort_3(stack_a);
    
    if (len > 3)
    {
        if (!is_sorted(stack_a))
            return 0;
        stack_b = malloc(sizeof(t_stack *));
        if (len == 4)
            sort_4(stack_a, stack_b);
        else if (len == 5)
            sort_5(stack_a, stack_b);
        else
            sort_more(stack_a, stack_b);
        clear_stack(stack_a);
    }
    
    
    // while (*stack_a)
    // {
    //     printf("->%d",(*stack_a)->content);
    //     (*stack_a) = (*stack_a)->next;
    // }
    // printf("\nstack b \n");
    // while (*stack_b)
    // {
    //     printf("->%d",(*stack_b)->final_rank);
    //     (*stack_b) = (*stack_b)->next;
    // }
    
}

// int main(int ac, char **av)
// {
//     int i = 0;
//     char **str = ft_split(av[1],' ');
//     char **str1 = ft_split(av[2],' ');

//     char **dest = ft_strdjoin(str,str1);
     
    
    
// }
// read
// seperate in char *
// atoi
// check double
