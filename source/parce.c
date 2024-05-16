/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parce.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:40:45 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/16 11:28:52 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(int *nbr, int len)
{
	int	i;
	int	j;
	int	x;
	int	d;

	i = 1;
	x = 0;
	d = 0;
	while (i < len)
	{
		j = nbr[i];
		d = 0;
		while (d < len)
		{
			if (j == nbr[d])
				x++;
			if (x > 1)
				return (1);
			d++;
		}
		x = 0;
		i++;
	}
	return (0);
}

int	nbr_len(int l)
{
	static int	i;

	if (l == 0)
		return (i);
	else
		i = l;
	return (i);
}

int	*str_to_nbr(char **str)
{
	int		i;
	int		j;
	int		*nbr;
	long	tmp;

	i = double_len(str);
	tmp = 0;
	j = 0;
	if (i <= 0)
	{
		nbr = malloc(16);
		clean_double(nbr, str);
		exit(error());
	}
	nbr = (int *)malloc(sizeof(int) * i);
	while (j < i)
	{
		tmp = ft_atoi(str[j]);
		nbr[j] = tmp;
		if (tmp > 2147483647)
			clean_double(nbr, str);
		j++;
	}
	nbr_len(j);
	return (nbr);
}

char	**get_str(char **s1, char *s2)
{
	char	**tmp;
	char	**tmp1;
	char	**str;

	tmp = s1;
	tmp1 = ft_split(s2, ' ');
	if (!tmp1 || !tmp1[0])
		tmp1[0] = ft_strdup("1error");
	str = ft_strdjoin(tmp, tmp1);
	free(tmp1);
	tmp1 = NULL;
	return (str);
}
