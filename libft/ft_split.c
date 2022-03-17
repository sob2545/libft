/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:47:16 by sesim             #+#    #+#             */
/*   Updated: 2022/03/17 20:44:14 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
	return (NULL);
}

static char	**word_split(char **tab, char const *s, char c, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cnt;

	i = 0;
	j = 0;
	while (j < len)
	{
		cnt = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			cnt++;
		}
		tab[j] = (char *)malloc(sizeof(char) * (cnt + 1));
		if (tab[j] == 0)
			return (word_free(tab));
		ft_strlcpy(tab[j], s - cnt, cnt);
		tab[j][cnt + 1] = '\0';
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	s_len;

	s_len = word_cnt(s, c);
	res = (char **)malloc(sizeof(char) * (s_len + 1));
	if (res == NULL)
		return (NULL);
	word_split(res, s, c, s_len);
	return (res);
}
