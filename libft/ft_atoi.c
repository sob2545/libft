/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:18:55 by sesim             #+#    #+#             */
/*   Updated: 2022/03/10 14:56:47 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	pn;
	int	res;

	i = 0;
	res = 0;
	pn = 1;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 43)
			pn *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res = nptr[i] + 48;
		i++;
	}
	return (res * pn);
}
