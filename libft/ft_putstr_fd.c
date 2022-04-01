/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:46:51 by sesim             #+#    #+#             */
/*   Updated: 2022/04/01 14:11:41 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == 0 || fd < 0)
		return ;
	while (s[i])
	{
		ft_putchar_fd((unsigned char)s[i], fd);
		i++;
	}
}
