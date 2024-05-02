/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:31:31 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:31:32 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_stack *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// void    del(void *content)
// {
//     free(content);
// }
// #include <stdio.h>
// int main()
// {
//     t_stack *a;
//     t_stack  *head;
//     t_stack *b;

//     a = ft_lstnew(strdup("hello world"));
//     b = ft_lstnew(strdup("salam l3alam"));
//     a->next=b;
//     head = a;
//     ft_lstdelone(head,del);
//      while (head && head->content)
//     {
//        // printf("%s",head->content);
//         head = head->next;
//     }

// }