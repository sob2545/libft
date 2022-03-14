/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:38 by sesim             #+#    #+#             */
/*   Updated: 2022/03/14 17:30:50 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	char	*tmp;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	while (n--)
	{
		*tmp = ;
		dst++;
		src++;
	}
	return (dst);
}
