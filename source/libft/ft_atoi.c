/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:53:39 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/23 18:15:37 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	sign;
	size_t	result;
	int j;

	j = 0;
	i = 0;
	sign = 1;
	result = 0;
	while ((nptr) && (nptr[i] == 32 || nptr[i] == '\t' || nptr[i] == '\v'
		|| nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-' )
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && j <= 10)
	{
		result = result * 10 + nptr[i] - 48;
		i++;
		j++;
	}
	return (sign * result);
}
