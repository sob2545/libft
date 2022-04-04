/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:47:16 by sesim             #+#    #+#             */
/*   Updated: 2022/04/04 17:29:26 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

static size_t	word_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
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

static char	**word_init(char **tab, char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c && s != 0)
			s++;
		if (*s != 0)
		{
			if (ft_strchr(s, c) == 0)
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			tab[i] = ft_substr(s, 0, len);
			if (tab[i] == 0)
				return (word_free(tab));
			s += len;
			i++;
		}
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == 0)
		return (0);
	res = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1));
	if (res == 0)
		return (0);
	word_init(res, s, c);
	return (res);
}
