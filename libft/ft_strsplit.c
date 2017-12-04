/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:23:20 by lilam             #+#    #+#             */
/*   Updated: 2017/12/04 09:47:01 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal_length(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			i++;
		s++;
	}
	return (i);
}

static char	*ft_print_word(int start, char const *str, char c)
{
	int		j;
	char	*temp;
	int		len;
	int		i;

	len = 0;
	j = start - 1;
	while (str[++j] != c)
		len++;
	temp = (char*)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (start < j)
		temp[i++] = str[start++];
	temp[i] = '\0';
	return (temp);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	if (!(s && c))
		return (NULL);
	arr = (char **)malloc(sizeof(arr) * (cal_length(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			arr[j++] = ft_print_word((i), s, c);
		else if (s[i] != c)
		{
			if (s[i - 1] == c)
				arr[j++] = ft_print_word((i), s, c);
		}
		i++;
	}
	arr[j] = (char*)'\0';
	return (arr);
}
