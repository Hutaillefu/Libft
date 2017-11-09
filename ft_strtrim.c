/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:58:54 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/09 14:12:39 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			y;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	y = 0;
	while (s[len] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		y++;
		len--;
	}
	return (ft_strsub(s, i, len - y));
}
