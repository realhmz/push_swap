/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:05 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/22 23:55:33 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	n_len;
	char	*temp;

	i = 0;
	temp = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (temp);
	while (temp[i] != 0 && i < len)
	{
		count = 0;
		while (temp[i + count] != '\0' && little[count] != '\0' && temp[i
				+ count] == little[count] && i + count < len)
			count++;
		if (count == n_len)
			return (temp + i);
		i++;
	}
	return (0);
}
