/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:48:44 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 21:45:56 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(const char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(const char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cpy_val;
	size_t	cat_val;
	char	*res;

	if (s1 == 0 || s2 == 0)
		return (0);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == 0)
		return (0);
	cpy_val = ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	cat_val = ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	if (cpy_val != ft_strlen(s1) || cat_val != (ft_strlen(s1) + ft_strlen(s2)))
		return (0);
	return (res);
}
