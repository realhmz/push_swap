/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:14:12 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/27 17:32:14 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lnth;
	size_t	i;
	size_t	len;

	if (!dst || dstsize == 0)
		return (ft_strlen(src));
	lnth = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lnth)
		len += dstsize;
	else
		len += lnth;
	i = 0;
	while (src[i] != '\0' && lnth + 1 < dstsize)
	{
		dst[lnth] = src[i];
		lnth++;
		i++;
	}
	dst[lnth] = '\0';
	return (len);
}
