/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 03:28:16 by linh              #+#    #+#             */
/*   Updated: 2017/12/03 04:33:00 by linh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	if (!content)
	{
			tmp->content = NULL;
			tmp->content_size = 0;
	}
	else
	{
			(!(tmp->content = malloc(sizeof(content))) ? free(tmp) :
			 ft_memcpy(tmp->content, content, content_size));
			tmp->content_size = content_size;
			tmp->next = NULL;
	}
	return (tmp);
}
