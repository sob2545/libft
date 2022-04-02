/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:02 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 22:00:52 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(const char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	mal_len;

	if (s == 0)
		return (0);
	mal_len = ft_strlen(s + start);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > mal_len)
		len = mal_len;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
