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


t_stack	*ft_lstnew(int content);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	swap(t_stack *a);
int	ft_lstsize(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void    pa(t_stack **a, t_stack **b);
t_stack	*ft_lstlast(t_stack **lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	swap_last(t_stack *a);
int	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
char **ft_strdjoin(char **str, char**s);
int double_len(char **str);
