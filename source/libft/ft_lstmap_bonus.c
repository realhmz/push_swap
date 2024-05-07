/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:42:53 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/07 22:13:27 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*new_list;
	t_stack	*new_node;
	t_stack	*temp;

	if (!lst || !f || !del)
		return (0);
	new_list = 0;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		if (new_list == 0)
			new_list = new_node;
		else
			temp->next = new_node;
		lst = lst->next;
		temp = new_node;
	}
	return (new_list);
}

void del(void *list)
{
	free(list);	
}
void *f(void *list)
{
	*(int *)list += 100;
	return (list);
}
#include <stdio.h>
int main()
{
	t_stack *head;
	int a;
	a = 121;
	head = ft_lstnew(&a);
	head = ft_lstmap(head,f,del);
	while (head)
	{
		printf("%d",*(int *)head->content);
		head = head->next;
	}
	
}