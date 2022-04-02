/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:49:48 by sesim             #+#    #+#             */
/*   Updated: 2022/04/02 22:00:48 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
char	ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*res;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	len = len - i + 1;
	res = ft_substr(s1, (unsigned int)i, len);
	if (res == 0)
		return (0);
	return (res);
}
