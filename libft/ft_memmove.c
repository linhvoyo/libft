/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 21:25:55 by lilam             #+#    #+#             */
/*   Updated: 2017/11/28 22:07:44 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
//	size_t i;

//	i = -1;
//	while (++i < len)
//	{
//		if (&(dst[i]) != &(src[i]))
//			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
//	}
//	return (dst);

//	int i;

//	if ((&(src[0]) == &(dst[-(dst - src)])) && (dst - src) > 0)
//	{
//		i = len + (dst - src) - 1; 
//		while (i >= 0)
//		{
//			if (i >= dst - src)
//				((unsigned char*)dst)[i] = ((unsigned char*)src)[i - (dst - src)];
//			else 
//				((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
//			i--;
//		}
//	}
//	else 
//	{
//		i = -1;
//		while (++i < (int)len)
//			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
//	}

	unsigned char	tmp[len];
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);

	return (dst);
}
