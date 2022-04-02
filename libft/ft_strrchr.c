/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:57 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 21:45:21 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	s_len;

	s_len = ft_strlen(s) + 1;
	while (s_len--)
	{
		if (s[s_len] == (char)c)
			return ((char *)s + s_len);
	}
	return (0);
}
