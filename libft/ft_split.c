/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:47:16 by sesim             #+#    #+#             */
/*   Updated: 2022/03/16 14:12:09 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	malloc_size(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			i++;
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**res;

	i = 0;
	res = (char **)malloc(sizeof())
}
