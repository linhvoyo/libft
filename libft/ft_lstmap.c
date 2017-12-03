/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 05:46:45 by linh              #+#    #+#             */
/*   Updated: 2017/12/03 06:12:38 by linh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
		t_list *tmp;

		tmp = lst;
		while (lst->next)
		{
			if (!(malloc(sizeof(f(lst)))))
					return (NULL);
			else
					lst = f(lst);
			lst=lst->next;
		}
		return (tmp);
}
