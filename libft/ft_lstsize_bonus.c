/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:17:43 by sesim             #+#    #+#             */
/*   Updated: 2022/03/21 17:19:31 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*next;

	cnt = 0;
	while (lst)
	{
		next = lst->next;
		cnt++;
	}
	return (cnt);
}
