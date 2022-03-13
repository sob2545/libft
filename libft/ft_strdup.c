/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:47 by sesim             #+#    #+#             */
/*   Updated: 2022/03/13 12:58:02 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new_s1;
	int		i;

	i = 0;
	new_s1 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (new_s1 == 0)
		return (0);
	while (s1[i] != '\0')
	{
		new_s1[i] = s1[i];
		i++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}
