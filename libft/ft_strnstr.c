/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:59:00 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 21:45:33 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + (ft_strlen(needle)) <= len && len != 0)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
