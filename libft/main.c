/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:32:21 by lilam             #+#    #+#             */
/*   Updated: 2017/12/02 18:53:10 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char dst1[0xF0];
	char dst2[0xF0];
	//char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	char *data = "hellothere";
	int size = 0xF0 - 0xF;

	__builtin___memset_chk (dst1, 'A', sizeof(dst1), __builtin_object_size (dst1, 0));
	__builtin___memset_chk (dst2, 'A', sizeof(dst2), __builtin_object_size (dst2, 0));
	__builtin___memcpy_chk (dst1, data, strlen(data), __builtin_object_size (dst1, 0));
	__builtin___memcpy_chk (dst2, data, strlen(data), __builtin_object_size (dst2, 0));
	__builtin___memmove_chk (dst1 + 3, dst1, size, __builtin_object_size (dst1 + 3, 0));
	ft_memmove(dst2 + 3, dst2, size);
	return (0);

}
