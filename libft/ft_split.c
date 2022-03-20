/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:47:16 by sesim             #+#    #+#             */
/*   Updated: 2022/03/20 18:14:56 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c)
		{
			cnt++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (cnt);
}

static char	**word_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static char	**word_split(char **tab, char const *s, char c, size_t len)
{
	size_t	j;
	size_t	cnt;

	j = 0;
	while (j < len)
	{
		cnt = 0;
		while (*s == c && s)
			s++;
		while (*s != c && s)
		{
			s++;
			cnt++;
		}
		tab[j] = (char *)malloc(sizeof(char) * (cnt + 1));
		if (tab[j] == 0)
			return (word_free(tab));
		ft_strlcpy(tab[j], s - cnt, cnt + 1);
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	s_len;

	s_len = word_cnt(s, c);
	res = (char **)malloc(sizeof(char *) * (s_len + 1));
	if (res == 0)
		return (0);
	word_split(res, s, c, s_len);
	return (res);
}
