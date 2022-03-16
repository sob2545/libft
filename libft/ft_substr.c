/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:02 by sesim             #+#    #+#             */
/*   Updated: 2022/03/16 14:32:34 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	sub_len;
	size_t	i;

	sub_len = len - start;
	i = 0;
	if (start > len)
		return (0);
	res = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (res == NULL)
		return (NULL);
	while (sub_len--)
	{
		res[i] = (char)s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
