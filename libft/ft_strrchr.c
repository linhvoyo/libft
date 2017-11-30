/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:50:33 by lilam             #+#    #+#             */
/*   Updated: 2017/11/29 17:02:38 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s) + 1;

	while (len--)
	{
		if (s[len] == c) 
			return ((char*)s + len);
	}

	return (NULL);
}
