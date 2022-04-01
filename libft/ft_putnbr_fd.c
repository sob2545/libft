/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:46:38 by sesim             #+#    #+#             */
/*   Updated: 2022/04/01 14:10:27 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void static	ft_print(int num, int fd)
{
	int	i;

	if (num <= 9)
	{
		i = num + 48;
		write(fd, &i, 1);
	}
	else
	{
		i = num % 10 + 48;
		num = num / 10;
		ft_print(num, fd);
		write(fd, &i, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == (-2147483648))
	{
		write (fd, "-2", 2);
		ft_print(147483648, fd);
	}
	else if (n < 0 && - 2147483648 < n)
	{
		write(fd, "-", 1);
		ft_print(-1 * n, fd);
	}
	else if (n >= 0 && n <= 2147483647)
		ft_print(n, fd);
	else
		return ;
}
