/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:29 by sesim             #+#    #+#             */
/*   Updated: 2022/03/14 17:36:44 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int	c, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	while (n)
	{
		*dst_ptr = *src_ptr;
		if (*src_ptr == (unsigned char) c)
			break ;
		dst_ptr++;
		src_ptr++;
	}
	return (dst_ptr);
}
