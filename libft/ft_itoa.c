/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:46:09 by sesim             #+#    #+#             */
/*   Updated: 2022/03/19 14:55:31 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	num_size(int n)
{
	size_t	len;

	len = 1;
	if (n == -2147483648)
		len = 11;
	if (n < 0 && n > -2147483648)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	val_init(size_t *div, size_t *i, size_t *len, int *n)
{
	*len = num_size(*n);
	*div = 1;
	*i = 0;
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	div;
	size_t	i;
	size_t	len;

	val_init(&div, &i, &len, &n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648\0");
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
		i++;
	}
	res[len + 1] = '\0';
	while (len-- > i)
	{
		res[len] = ((n / div) % 10) + 48;
		div *= 10;
	}
	return (res);
}
