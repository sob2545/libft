/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:02 by sesim             #+#    #+#             */
/*   Updated: 2022/03/20 18:32:23 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		mal_len;

	mal_len = ft_strlen(s + start);
	if (len > mal_len || len == 0)
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * mal_len + 1);
	if (res == 0)
		return (0);
	ft_strdup(s + start);
	return (res);
}
