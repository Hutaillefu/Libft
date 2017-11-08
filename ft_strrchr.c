/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:29:49 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/08 15:53:20 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*res1;

	res1 = ft_strchr(s, c);
	if (!res1)
		return (res1);
	while ((res = ft_strchr(res1, c)) != NULL)
	{
		res1 = res + 1;
	}
	return (res1 - 1);
}
