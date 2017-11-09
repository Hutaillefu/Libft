/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:15:40 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/09 14:30:56 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] && s[i] == c)
			i++;
		
	}
}
