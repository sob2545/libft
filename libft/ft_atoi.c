/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:18:55 by sesim             #+#    #+#             */
/*   Updated: 2022/03/13 12:54:23 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pn;
	int	res;

	i = 0;
	res = 0;
	pn = 1;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 43)
			pn *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = str[i] + 48;
		i++;
	}
	return (res * pn);
}
