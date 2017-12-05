/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:23:20 by lilam             #+#    #+#             */
/*   Updated: 2017/12/04 19:04:09 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int        word_count(char const *str, char c)
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

static int        letter_count(char const *str, char c)
{
	int    n;

	n = 0;
	while (str[n] != '\0' && str[n] != c)
		n++;
	return (n);
}

static char        **last_elem(char **temp, int c2)
{
	temp[c2] = (char*)malloc(sizeof(char) * 1);
	if (!temp[c2])
		return (NULL);
	temp[c2] = NULL;
	return (temp);
}

char            **ft_strsplit(char const *s, char c)
{
	char    **temp;
	int        num[3];

	if (!s)
		return (NULL);
	num[1] = 0;
	num[2] = 0;
	if (!(temp = (char**)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	while (s[num[1]])
	{
		if (s[num[1]] == c)
			num[1]++;
		else
		{
			num[0] = letter_count(s + num[1], c);
			if (!(temp[num[2]] = (char*)malloc(sizeof(char) * (num[0] + 1))))
				return (NULL);
			ft_strncpy(temp[num[2]], s + num[1], num[0]);
			temp[num[2]++][num[0]] = '\0';
			num[1] += num[0];
		}
	}
}

