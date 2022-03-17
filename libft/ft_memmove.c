/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:38 by sesim             #+#    #+#             */
/*   Updated: 2022/03/16 23:25:22 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)dst;
	if (dst < src)
	{
		while (n--)
			*tmp++ = *(char *)src++;
	}
	else
	{
		tmp += n - 1;
		src += n - 1;
		while (n--)
			*tmp-- = *(char *)src--;
	}
	return (dst);
}
