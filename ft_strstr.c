/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:47:15 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/08 15:13:57 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		y;
	int		needle_len;
	char	*ptr;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		y = 0;
		if (haystack[i] == needle[y])
		{
			ptr = (char *)&haystack[i];
			while (haystack[i] && needle[y] && haystack[i] == needle[y])
			{
				i++;
				y++;
			}
			if (y == needle_len)
				return (ptr);
		}
		i++;
	}
	return (NULL);
}
