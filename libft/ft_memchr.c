/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:32 by sesim             #+#    #+#             */
/*   Updated: 2022/03/16 23:28:50 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return (0);
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return ((void *)s);
		s++;
	}
	return (0);
}
