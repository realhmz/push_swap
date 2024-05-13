/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:11 by het-taja          #+#    #+#             */
/*   Updated: 2024/05/13 12:26:47 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	atoi_checker(const char *str, int i)
{
	while (str && str[i])
	{
		if (!ft_isdigit(str[i]))
			exit(error());
		i++;
	}
}

int	half_atoi(const char *nptr, int i, long long result,
		long long sign)
{
	if (nptr[i] == 0)
		i--;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - 48;
		i++;
		if ((sign == 1 && result > 2147483647) || (sign == -1
				&& result > 2147483648))
			exit(error());
	}
	if (result == 0)
	{
		i = 1;
		if (ft_strlen(nptr) == 1 && nptr[0] != '0')
			exit(error());
	}
	return (sign * result);
}

size_t	ft_atoi(const char *nptr)
{
	size_t		i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr) && (nptr[i] == 32 || nptr[i] == '\t' || nptr[i] == '\v'
			|| nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	atoi_checker(nptr, i);
	while (nptr[i] == '0' && nptr[i + 1] == '0')
		i++;
	return (half_atoi(nptr, i, result, sign));
}
