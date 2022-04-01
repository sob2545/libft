/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:46:09 by sesim             #+#    #+#             */
/*   Updated: 2022/04/01 14:04:09 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	nb_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;

	i = nb_size(n) + 1;
	res = (char *)malloc(sizeof(char) * i);
	if (res == 0)
		return (0);
	res[--i] = '\0';
	while (i)
	{
		if (n < 0)
		{
			res[--i] = 48 - (n % 10);
		}
		else
			res[--i] = 48 + (n % 10);
		if (n <= 0 && res[1] != '\0')
			res[0] = '-';
		n /= 10;
	}
	return (res);
}
