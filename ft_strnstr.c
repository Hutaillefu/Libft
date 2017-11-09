/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:15:38 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/09 18:14:19 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		y;
	int		needle_len;
	char	*ptr;

	if ((needle_len = ft_strlen(needle) == 0))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		y = 0;
		if (haystack[i] == needle[y])
		{
			ptr = (char *)&haystack[i];
			while (haystack[i] && needle[y] && haystack[i] == needle[y] && i < len)
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
