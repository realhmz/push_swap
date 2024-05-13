/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:40:21 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/13 12:15:46 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	double_len(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	**ft_join(char **dest, char **s, int x, int max)
{
	int	i;

	i = 0;
	while (x < max)
	{
		dest[x] = ft_strdup(s[i]);
		free(s[i]);
		x++;
		i++;
	}
	return (dest);
}

char	**ft_strdjoin(char **str, char **s)
{
	int		i;
	int		j;
	int		x;
	char	**dest;

	i = double_len(str);
	j = double_len(s);
	x = 0;
	dest = malloc(sizeof(char *) * (i + j + 1));
	if (!dest)
		return (NULL);
	while (x < i)
	{
		dest[x] = ft_strdup(str[x]);
		free(str[x]);
		x++;
	}
	dest = ft_join(dest, s, x, (i + j));
	dest[i + j] = NULL;
	free(str);
	return (dest);
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		swap_last(tmp);
		tmp = tmp->next;
	}
	tmp = *a;
	while (tmp)
	{
		swap_last(tmp);
		tmp = tmp->next;
	}
	write(1, "rrr\n", 4);
}
