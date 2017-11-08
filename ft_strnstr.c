/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:15:38 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/08 15:22:04 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *dst;

	dst = (char *)malloc(sizeof(char) * len);
	if (!dst)
		return (NULL);
	return (ft_strstr(haystack, ft_strncpy(dst, needle, len)));
}
