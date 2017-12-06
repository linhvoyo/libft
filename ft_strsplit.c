/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:23:20 by lilam             #+#    #+#             */
/*   Updated: 2017/12/05 17:35:41 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int        cal_length(char const *str, char c)
{
	int    words;
	int    i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			words++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (words);
}

static char		*ft_print_word(int start, char const *str, char c)
{
	int		j;
	char	*temp;
	int		len;
	int		i;

	len = 0;
	j = start;
	while (str[j] != c || str[j] == '\0')
	{
		j++;
		len++;
	}
	temp = (char*)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (start < j)
		temp[i++] = str[start++];
	temp[i] = '\0';
	return (temp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	if (!(s && c))
		return (NULL);
	arr = (char **)malloc(sizeof(char*) * (cal_length(s, c) + 1));
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
	arr[j] = (char*)malloc(sizeof(char) * 1);
	if (!arr[j])
		return (NULL);
	arr[j] = NULL;
	return (arr);
}
