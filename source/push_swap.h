/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:10 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 11:38:15 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				final_rank;
	struct s_stack	*next;
}	t_stack;

// Instructions functions
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	rb(t_stack **b);
void	ra(t_stack **a);
void	rrr(t_stack **a, t_stack **b);
void	rrb(t_stack **b);
void	rra(t_stack **a);
void	swap(t_stack *a);
void	swap_last(t_stack *a);
void	pa(t_stack **a, t_stack **b);
// parcing functions
char	**get_str(char **s1, char *s2);
char	**ft_split(char const *s, char c);
char	**ft_strdjoin(char **str, char**s);
int		check_double(int *nbr, int len);
int		*str_to_nbr(char **str);
int		*str_to_nbr(char **str);
int		nbr_len(int l);
int		double_len(char **str);
int		error(void);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);
void	clean_double(int *nbr, char **str);
// Linked List Functions
t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack **lst);
t_stack	**stack_new(int *nbr, int len);
int		ft_lstsize(t_stack *lst);
int		is_sorted(t_stack **stack);
int		is_lowest(t_stack *head, t_stack **a);
int		max_pos(t_stack **b);
int		is_highest(t_stack *head, t_stack **a);
int		ft_range(t_stack **stack);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	set_final_mark(t_stack **stack);
void	sort_3(t_stack **stack);
void	sort_more(t_stack **a, t_stack **b);
void	send_back(t_stack **a, t_stack **b);
void	sort_4(t_stack **stack, t_stack **b);
void	sort_5(t_stack **stack, t_stack **b);
void	clear_str(char **str);
void	ft_lstclear(t_stack **lst);
void	reset_final_rank(t_stack **stack);
void	send_back(t_stack **a, t_stack **b);
void	maxifixi(int max, t_stack **b);
long	ft_atoi(const char *nptr);
