/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 04:52:35 by linh              #+#    #+#             */
/*   Updated: 2017/12/03 05:20:51 by linh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
		t_list *next;
	
		while (*alst)
		{
				next = (*alst)->next;
				del((*alst)->content, (*alst)->content_size);
				free(*alst);
				*alst = NULL;
				*alst = next;
		}
}
