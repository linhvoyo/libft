/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exponent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 06:14:31 by linh              #+#    #+#             */
/*   Updated: 2017/12/03 06:37:26 by linh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

long long   ft_exponent(long long n, long long power)
{
		long long res;
		
		res = 1;
		while (power--)
				res = res * n;
		return (res);
}

//int main()
//{
//		printf("%lld\n",ft_exponent(10, 2));
//		return (0);
//}
