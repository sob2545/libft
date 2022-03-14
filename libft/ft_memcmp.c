/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:04 by sesim             #+#    #+#             */
/*   Updated: 2022/03/14 17:00:47 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_ptr == *s2_ptr)
			return (*s1_ptr - *s2_ptr);
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}
