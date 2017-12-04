/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 22:20:06 by lilam             #+#    #+#             */
/*   Updated: 2017/12/04 10:38:00 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t little_length;

	i = 0;
	little_length = 0;
	if (!*little)
		return ((char*)big);
	while (little[little_length] && little_length <= len)
		little_length++;
	printf("%zu\n", little_length);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
		{
			printf("%zu ", i);
			printf("%c\n", little[j]);
			j++;
		}
		printf("%zu ", j);
	//	if (j == little_length && ft_strlen(big + i) <= len)
	//		return ((char*)(big + i));
		if (j == little_length)
			return ((char*)(big + i));
		i++;
	}
	return (0);
}
