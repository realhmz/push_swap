/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 02:35:22 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/22 23:55:13 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	index;
	size_t	lenth;

	lenth = ft_strlen(s);
	index = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(lenth + 1);
	if (!str)
		return (NULL);
	while (index < lenth)
	{
		str[index] = s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
