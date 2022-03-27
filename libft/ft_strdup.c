/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongminsim <sesim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:46:39 by seongmins         #+#    #+#             */
/*   Updated: 2022/03/25 21:30:01 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
