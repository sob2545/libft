/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:18:55 by sesim             #+#    #+#             */
/*   Updated: 2022/03/21 15:13:50 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_val(size_t nb, int pn)
{
	if (nb > 2147483647 && pn == 1)
		return (-1);
	else if (nb > 2147483648 && pn == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		pn;
	size_t	res;

	i = 0;
	res = 0;
	pn = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			pn *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) && *str)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	if (check_val(res, pn) != 1)
		return (check_val(res, pn));
	return ((int)res * pn);
}
