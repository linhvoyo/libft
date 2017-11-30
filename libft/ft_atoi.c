/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:00:15 by lilam             #+#    #+#             */
/*   Updated: 2017/11/30 10:37:09 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long i;
	long val;
	long sign;

	sign = 1;
	i = 0;
	val = 0;
	while (DL(str[i]) || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
//	if (str[i] == '+')
//		i++;
//	if (str[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == '0')
			return (0);
		else (str[i] >= '0' && str[i] <= '9')
			val = val * 10 + str[i] - '0';
		i++;
	}
	return (val * sign);
}
