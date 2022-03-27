/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongminsim <sesim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:48:17 by seongmins         #+#    #+#             */
/*   Updated: 2022/03/27 15:31:55 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*res;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	res = 0;
	while (lst)
	{
		cur = ft_lstnew(f(lst->content));
		if (!cur)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, cur);
		cur = cur->next;
		lst = lst->next;
	}
	return (res);
}
