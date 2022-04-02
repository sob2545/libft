/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:15:38 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 22:00:18 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(const char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s1) + 1;
	res = (char *)malloc(sizeof(char) * s_len);
	if (res == 0)
		return (0);
	ft_strlcpy(res, s1, s_len);
	return (res);
}
