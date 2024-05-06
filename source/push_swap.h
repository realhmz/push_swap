#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./libft/libft.h"

typedef struct s_stack
{
	int            content;
	int				index;
	int             range;
	int            final_rank;
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
char	**ft_split(char const *s, char c);
char **ft_strdjoin(char **str, char**s);
int check_double(int *nbr, int len);
int *str_to_nbr(char **str);
int nbr_len(int l);
int double_len(char **str);
void    ss(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    pa(t_stack **a, t_stack **b);
void    rb(t_stack **b);
void    ra(t_stack **a);
void    rrr(t_stack **a,t_stack **b);
void    rrb(t_stack **b);
void    rra(t_stack **a);
t_stack **stack_new(int *nbr, int len);
size_t	ft_atoi(const char *nptr);
void    set_final_mark(t_stack **stack);
void    sort_3(t_stack **stack);
void    sort_more(t_stack **stack_a, t_stack **stack_b);
void    set_index(t_stack **stack);


