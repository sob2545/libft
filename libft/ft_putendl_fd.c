/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:46:30 by sesim             #+#    #+#             */
/*   Updated: 2022/04/01 14:10:12 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
