/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:33:01 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/22 23:54:49 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
