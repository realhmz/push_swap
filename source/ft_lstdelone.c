/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:42 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/09 11:39:50 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_stack *lst)
{
	if (!lst)
		return ;
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